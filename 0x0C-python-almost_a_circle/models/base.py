#!/usr/bin/python3
""" main base class """
import json
import csv
import turtle
from models.rectangle import Rectangle
from models.square import Square


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
        """deserializes a json list represented as a string"""
        if json_string is None or len(json_string) == 0 or json_string == "[]":
            return []
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
        except FileNotFoundError:
            return temp

    @classmethod
    def create(cls, **dictionary):
        """ create dummy instances to fill in and update """
        if cls.__name__ == 'Rectangle':
            temp = cls(1, 1)
        if cls.__name__ == 'Square':
            temp = cls(1)
        temp.update(**dictionary)
        return temp

    @classmethod
    def save_to_file_csv(cls, list_objs):
        with open(cls.__name__ + ".csv", 'w', newline='') as mfile:
            if list_objs is not None or len(list_objs) != 0:
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
                read = csv.DictReader(mfile)
                for i in read:
                    try:
                        for a in i.keys():
                            i[a] = int(i[a])
                    except:
                        pass
                    temp.append(cls.create(**i))
                return temp
        except FileNotFoundError:
            return temp

    @staticmethod
    def draw(list_rectangles, list_squares):
        if list_rectangles is not None or len(list_rectangles) != 0:
            temp = []
            D = turtle.Turtle()
            for i in list_rectangles:
                temp = (i.to_dictionary())
                D.penup()
                D.goto(temp["x"], temp["y"])
                D.pendown()
                i = 0
                while (i < 2):
                    D.right(90)
                    D.forward(temp["width"])
                    D.right(90)
                    D.forward(temp["height"])
                    i += 1
        if list_squares is not None or len(list_squares) != 0:
            D = turtle.Turtle()
            for i in list_squares:
                temp = (i.to_dictionary())
                D.penup()
                D.goto(temp["x"], temp["y"])
                D.pendown()
                for i in range(4):
                    D.right(90)
                    D.forward(temp["size"])
