#!/usr/bin/python3
"""Module consisting of Rectangle class to represent rectangles"""


class Rectangle():
    """Rectangle class"""

    number_of_instances = 0

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
        Rectangle.number_of_instances += 1

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

    def __str__(self):
        """returns printed verison of rectangle"""
        rect = ""
        for i in range(self.__height):
            for j in range(self.__width):
                rect += '#'
            if i != (self.__height - 1):
                rect += '\n'
        return rect

    def __repr__(self):
        """returns eval version of rectangle"""
        return "Rectangle({:d}, {:d})".format(self.__width, self.__height)

    def __del__(self):
        """invoked when instance is deleted"""
        Rectangle.number_of_instances -= 1
        print("Bye rectangle...")
