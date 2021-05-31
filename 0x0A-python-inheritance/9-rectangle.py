#!/usr/bin/python3
"""base geometry class"""


class BaseGeometry():
    """base geometry class main part"""
    def area(self):
            """area of class"""
            raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
            """integer checker"""
            if not isinstance(value, int):
                    raise TypeError("{} must be an integer".format(name))
            if value <= 0:
                    raise ValueError("{} must be greater than 0".format(name))

"""Rectangle class to represent a square"""


class Rectangle(BaseGeometry):
    """Rectangle Class"""
    def __init__(self, width, height):
            """init"""
            self.integer_validator("width", width)
            self.integer_validator("height", height)
            self.__width = width
            self.__height = height

    def area(self):
            """ area of rectangle """
            return self.__width * self.__height

    def __str__(self):
            """returns when called"""
            return "[Rectangle] {}/{}".format(self.__width, self.__height)
