#!/usr/bin/python3
"""base geometry class"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry
Rectangle = __import__('9-rectangle').Rectangle

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
