#!/usr/bin/python3
"""
    Main Console program
"""
import cmd
import models


class HBNBCommand(cmd.Cmd):
    """Console"""
    prompt = "(hbnb) "

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
                new_instance().save()
            except:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_show(self, arg):
        """Prints the string representation of an instance based on the class name and id"""
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
                        models.storage.all().pop(key).save()
                    except:
                        print("** no instance found **")
                else:
                    print("** instance id missing **")
            else:
                print("** class doesn't exist **")
        else:
            print("** class name missing **")

    def do_all(self, arg):
        """Prints all string representation of all instances based or not on the class name"""
        if arg:
            arg = arg.split()
            if arg[0] in models.dummy_classes:
                for instance, obj in models.storage.all().items():
                    if instance.split('.')[0] == arg[0]:
                        print(obj)
            else:
                print("** class doesn't exist **")
        else:
            for instance, obj in models.storage.all().items():
                print(obj)

    def do_update(self, arg):
        """Updates an instance based on the class name and id by adding or updating attribute"""
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
                                models.storage.save()
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

if __name__ == "__main__":
    HBNBCommand().cmdloop()
