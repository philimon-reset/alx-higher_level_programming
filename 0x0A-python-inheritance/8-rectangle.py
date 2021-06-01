#!/usr/bin/python3
"""base geometry class"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry

"""Rectangle class to represent a square"""


class Rectangle(BaseGeometry):
    """Rectangle Class"""
    def __init__(self, width, height):
            """init"""
            self.integer_validator("width", width)
            self.integer_validator("height", height)
            self.__width = width
            self.__height = height
