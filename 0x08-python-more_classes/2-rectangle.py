#!/usr/bin/python3
<<<<<<< HEAD
"""Rectangle class to represent a square"""


class rectangle():
    """Rectangle Class"""
    def __init__(self, width=0, height=0):
        if not isinstance(width, int):
            raise TypeError("width must be an integer")
        if width < 0:
            raise TypeError("width must be >= 0")
        if not isinstance(height, int):
            raise TypeError("height must be an integer")
        if height < 0:
            raise TypeError("height must be >= 0")
        else:
            self.__width = width
            self.__height = height
    @property
    def width(self):
        return self.__width
    @width.setter
    def width(self, value):
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise TypeError("width must be >= 0")
        else:
            self.__width = value

    @property
    def height(self):
        return self.__height
    @height.setter
    def height(self, value):
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise TypeError("height must be >= 0")
        else:
            self.__height = value
    def area(self):
        return self.__width * self.__height
    def perimeter(self):
        if self.__width == 0 or self.__height = 0:
            return 0
        else:
            return 2 * (self.__width + self.__height)
=======
"""Module consisting of Rectangle class to represent rectangles"""


class Rectangle():
    """Rectangle class"""
    def __init__(self, width=0, height=0):
        if type(width) is not int:
            raise TypeError("width must be an integer")
        if width < 0:
            raise ValueError("width must be >= 0")
        if type(height) is not int:
            raise TypeError("height must be an integer")
        if height < 0:
            raise ValueError("height must be >= 0")
        self.__width = width
        self.__height = height

    @property
    def width(self):
        """width getter"""
        return self.__width

    @property
    def height(self):
        """height getter"""
        return self.__height

    @width.setter
    def width(self, value):
        """width setter"""
        if type(value) is not int:
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @height.setter
    def height(self, value):
        """height setter"""
        if type(value) is not int:
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """calculates area"""
        return self.__width * self.__height

    def perimeter(self):
        """calculates perimeter"""
        if (not self.__width) or (not self.__height):
            return 0
        return 2 * (self.__width + self.__height)
>>>>>>> d9e142a7840cd0be2a498d8ee55a70c5708b67ab
