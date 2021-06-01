#!/usr/bin/python3
"""base geometry class"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry

"""Rectangle class to represent a square"""


class Rectangle(BaseGeometry):
    """Rectangle Class"""
    def __init__(self, width=0, height=0):
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

"""class to represent a square"""


class Square(Rectangle):
    """square Class"""
    def __init__(self, size):
            """init"""
            self.integer_validator("size", size)
            super().__init__(size, size)
            self.__size = size

    def area(self):
            """ area of square """
            return self.__size ** 2

    def __str__(self):
            """returns when called"""
            return "[Square] {}/{}".format(self.__size, self.__size)
