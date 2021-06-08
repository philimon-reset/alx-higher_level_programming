#!/usr/bin/python3
""" square class """
from models.Rectangle import Rectangle
import json


class Square(Rectangle):
    """ square class with rectangle and base inheritance """
    def __init__(self, size, x=0, y=0, id=None):
        """ init """
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ staright printed value of instance """
        return "[Square] ({}) {}/{} - {}/{}".format(self.id,
                                                       self.x, self.y,
                                                       self.width)

    @property
    def size(self):
        """ returns size """
        return self.width

    @size.setter
    def size(self, value):
        """ set width and height to same value """
        self.width = value
        self.height = value

    def update(self, *args, **kwargs):
        """ update value of square attributes """
        a = ["id", "width", "x", "y"]
        if len(args) != 0 and args is not None:
            for i in range(len(args)):
                if i > len(a) - 1:
                    break
                setattr(self, a[i], args[i])
        else:
            for i in kwargs.keys():
                if i in a:
                    setattr(self, i, kwargs[i])

    def to_dictionary(self):
        """ list rep of instances """
        temp = {}
        a = ["id", "size", "x", "y"]
        for i in a:
            temp[i] = getattr(self, i)
        return temp
