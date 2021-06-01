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
