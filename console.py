import cmd
import models
import json


class HBNBCommand(cmd.Cmd):
    """Simple command processor example."""
    classes = ["BaseModel", "FileStorage"]

    prompt = '(hbnb)'

    def do_create(self, line):
        """ Create Basemodel instance"""
        if line and line in self.classes:
            temp_ins = models.dummy_ins[self.classes[0]]()
            models.storage.save()
            if models.storage.all().keys():
                for i, dic in models.storage.all().items():
                    if (i.split('.')[1] == temp_ins.id):
                        models.storage.reload()
            else:
                models.storage.save()
            print(temp_ins.id)
        elif line:
            print("** class doesn't exist **")
        else:
            print("** class name missing ** ")

    def do_show(self, line):
        """ show Basemodel instance"""
        if line:
            liner = line.split()
            if len(liner) > 1:
                if (liner[0] and liner[1]) and liner[0] in self.classes:
                    a = 0
                    for i, dic in models.storage.all().items():
                        a += 1
                        if i.split('.')[1] == liner[1]:
                            print(dic)
                            break
                        elif (a == len(models.storage.all())):
                            print("** no instance found **")
                elif liner[0] not in self.classes:
                    print("** class doesn't exist **")
                else:
                    print("** no instance found **")
            elif line not in self.classes:
                print("** class doesn't exist **")
            else:
                print("** instance id missing **")
        else:
            print("** class name missing ** ")

    def do_all(self, line):
        """ print all instances """
        if line in self.classes:
            temp = []
            for i, di in models.storage.all().items():
                temp.append(str(di))
            print(temp)
        else:
            print("** class doesn't exist **")

    def do_destroy(self, line):
        """ Destroy instance """
        if line:
            liner = line.split()
            if len(liner) > 1:
                if (liner[0] and liner[1]) and liner[0] in self.classes:
                    a = 0
                    for i, dic in models.storage.all().items():
                        a += 1
                        if i.split('.')[1] == liner[1]:
                            models.storage.all().pop(i).save()
                            break
                        # THE FUCKKKKKK
                        elif (a == len(models.storage.all())):
                            print("** no instance found **")
                else:
                    print("** no instance found **")
            elif line not in self.classes:
                print("** class doesn't exist **")
            else:
                print("** instance id missing **")
        else:
            print("** class name missing ** ")

    def do_update(self, line):
        """ update instance """
        if line:
            liner = line.split()
            if len(liner) > 1:
                if (liner[0] and liner[1]) and liner[0] in self.classes:
                    a = 0
                    for i, dic in models.storage.all().items():
                        a += 1
                        if i.split('.')[1] == liner[1]:
                            # working space
                            # FUCK UUUUUUUUUU IM DONE
                            pass
                        elif (a == len(models.storage.all())):
                            print("** no instance found **")
                else:
                    print("** no instance found **")
            elif line not in self.classes:
                print("** class doesn't exist **")
            else:
                print("** instance id missing **")
        else:
            print("** class name missing ** ")

    def do_EOF(self, line):
        """EOF Quit command to exit the program"""
        return True

    def do_quit(self, line):
        """ Quit command to exit the program. """
        return True

if __name__ == '__main__':
    import sys
    if len(sys.argv) > 1:
        HBNBCommand().onecmd(' '.join(sys.argv[1:]))
    else:
        HBNBCommand().cmdloop()
