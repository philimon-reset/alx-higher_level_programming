#!/usr/bin/python3
""" main base class """
import json


class Base():
    """ start of base class """
    __nb_objects = 0

    def __init__(self, id=None):
        """ init """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """ convert list rep of json file to string rep """
        temp = []
        if list_dictionaries is None or len(list_dictionaries) == 0:
            return str(temp)
        temp = json.dumps(list_dictionaries)
        return temp

    @staticmethod
    def from_json_string(json_string):
        """ convert string rep of json file to list rep """
        temp = []
        if json_string is None or len(json_string) == 0 or json_string == "[]":
            return temp
        return json.loads(json_string)

    @classmethod
    def save_to_file(cls, list_objs):
        """ save string rep of rep file to new file """
        temp = []
        if list_objs is None or len(list_objs) == 0:
            with open(cls.__name__ + ".json", 'w', encoding='utf8') as mfile:
                mfile.write(cls.to_json_string(temp))
        else:
            for v in list_objs:
                temp.append(v.to_dictionary())
            temp = cls.to_json_string(temp)
            with open(cls.__name__ + ".json", 'w', encoding='utf8') as mfile:
                mfile.write(temp)

    @classmethod
    def load_from_file(cls):
        """ load string rep and return actual value of instances """
        temp = []
        try:
            with open(cls.__name__ + ".json", "r", encoding="utf-8") as mfile:
                a = cls.from_json_string(mfile.read())
            for i in a:
                temp.append(cls.create(**i))
            return temp
        except FileExistsError:
            return temp

    @classmethod
    def create(cls, **dictionary):
        """ create dummy instances to fill in and update """
        if cls.__name__ == 'Rectangle':
            temp = cls(1, 1)
        elif cls.__name__ == 'Square':
            temp = cls(1)
        temp.update(**dictionary)
        return temp

    @classmethod
    def save_to_file_csv(cls, list_objs):
        temp = []
        if list_objs is None or len(list_objs) == 0:
            with open(cls.__name__ + ".csv", 'w', newline='') as mfile:
                fieldname = []
                wrt = csv.DictWriter(mfile, fieldnames=fieldname)
                wrt.writeheader()
                for i in list_objs:
                    wrt.writerow(i.to_dictionary())
        else:
            with open(cls.__name__ + ".csv", 'w', newline='') as mfile:
                if cls.__name__ == "Rectangle":
                    fieldname = ["id", "width", "height", "x", "y"]
                elif cls.__name__ == "Square":
                    fieldname = ["id", "size", "x", "y"]
                wrt = csv.DictWriter(mfile, fieldnames=fieldname)
                wrt.writeheader()
                for i in list_objs:
                    wrt.writerow(i.to_dictionary())

    @classmethod
    def load_from_file_csv(cls):
        temp = []
        try:
            with open(cls.__name__ + ".csv", 'r', newline='') as mfile:
                if cls.__name__ == "Rectangle":
                    fieldname = ["id", "width", "height", "x", "y"]
                elif cls.__name__ == "Square":
                    fieldname = ["id", "size", "x", "y"]
                read = csv.DictReader(mfile)
                for i in read:
                    try:
                        for a in i.keys():
                            i[a] = int(i[a])
                    except:
                        pass
                    temp.append(cls.create(**i))
                return temp
        except FileExistsError:
            return temp
