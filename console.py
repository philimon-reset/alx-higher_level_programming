#!/usr/bin/python3
"""
    Main Console program
"""
import cmd
import models
import re


class HBNBCommand(cmd.Cmd):
    """Console"""
    prompt = "(hbnb) "

    @classmethod
    def fetch_command(cls, command):
        commands = {"all": cls.do_all, "show": cls.do_show,
                    "destroy": cls.do_destroy, "update": cls.do_update,
                    "count": cls.do_count}
        if command in commands:
            return commands[command]
        else:
            return None

    def do_EOF(self, arg):
        """Quit the program"""
        return True

    def do_quit(self, arg):
        """Quit the program"""
        return True

    def emptyline(self):
        """Ignore empty inputs"""
        pass

    def do_create(self, arg):
        """Creates a new instance of a Model"""
        if arg:
            try:
                new_instance = models.dummy_classes[arg]
                new_instance = new_instance()
                new_instance.save()
                print(new_instance.id)
            except:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_show(self, arg):
        """string representation of an instance"""
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                if len(arg) > 1:
                    key = "{}.{}".format(arg[0], arg[1])
                    try:
                        print(models.storage.all()[key])
                    except:
                        print("** no instance found **")
                else:
                    print("** instance id missing **")
            else:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_destroy(self, arg):
        """ Deletes an instance based on the class name and id"""
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                if len(arg) > 1:
                    key = "{}.{}".format(arg[0], arg[1])
                    try:
                        garbage = models.storage.all().pop(key)
                        del(garbage)
                        models.storage.save()
                    except:
                        print("** no instance found **")
                else:
                    print("** instance id missing **")
            else:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_all(self, arg):
        """string representation of all instances"""
        result = []
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                for instance, obj in models.storage.all().items():
                    if instance.split('.')[0] == arg[0]:
                        result.append(str(obj))
            else:
                print("** class doesn't exist **")
        else:
            for instance, obj in models.storage.all().items():
                result.append(str(obj))
        if result:
            print(result)

    def do_update(self, arg):
        """Updates an instance adding or updating attribute"""
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                if len(arg) > 1:
                    key = "{}.{}".format(arg[0], arg[1])
                    try:
                        instance = models.storage.all()[key]
                        if len(arg) > 2:
                            if len(arg) > 3:
                                setattr(instance, arg[2], arg[3].strip('"'))
                                instance.save()
                            else:
                                print("** value missing **")
                        else:
                            print("** attribute name missing **")
                    except:
                        print("** no instance found **")
                else:
                    print("** instance id missing **")
            else:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_count(self, arg):
        """
        count number of instances
        """
        count = 0
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                for instance, obj in models.storage.all().items():
                    if instance.split('.')[0] == arg[0]:
                        count += 1
            else:
                print("** class doesn't exist **")
        else:
            for instance, obj in models.storage.all().items():
                count += 1
        print(count)

    def default(self, line):
        """
        handle invalid commands and
        special commands like <class name>.<command>()
        """
        match = re.fullmatch(r"[A-Za-z]+\.[A-Za-z]+\(.*?\)", line)
        if match:
            splited = line.split('.')
            if splited[0] in models.dummy_classes:
                parsed = splited[1].split("(")
                parsed[1] = parsed[1].strip(")")
                command = self.fetch_command(parsed[0])
                if command:
                    reconstructed_command = " ".join([splited[0]])
                    command(self, reconstructed_command)
                else:
                    print("*** Unknown syntax: {}".format(line))
            else:
                print("** class doesn't exist **")
        else:
            print("*** Unknown syntax: {}".format(line))

if __name__ == "__main__":
    HBNBCommand().cmdloop()
