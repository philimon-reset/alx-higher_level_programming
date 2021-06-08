#!/usr/bin/python3
"""contains Square class to represent squares"""
from models.rectangle import Rectangle


class Square(Rectangle):
    """class to represent a Square"""
    def __init__(self, size, x=0, y=0, id=None):
        """square class"""
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ staright printed value of instance """
        return "[Square] ({}) {}/{} - {}/{}".format(self.id, self.x,
                                                    self.y, self.width)

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
                    if i == "size":
                        setattr(self, a[1], kwargs[i])
                    else:
                        setattr(self, i, kwargs[i])

    def to_dictionary(self):
        """ list rep of instances """
        temp = {}
        a = ["id", "size", "x", "y"]
        for i in a:
            temp[i] = getattr(self, i)
        return temp
