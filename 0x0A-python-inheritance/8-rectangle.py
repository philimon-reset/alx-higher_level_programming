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
                    raise TypeError("{:s} must be an integer".format(name))
            if value <= 0:
                    raise ValueError("{:s} must be greater than 0".format(name))

"""Rectangle class to represent a square"""


class Rectangle(BaseGeometry):
    """Rectangle Class"""
    def __init__(self, width=0, height=0):
            """init"""
            self.integer_validator(width, width)
            self.integer_validator(height, height)
            self.__width = width
            self.__height = height
