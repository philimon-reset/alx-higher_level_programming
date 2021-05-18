#!/usr/bin/python3
"""square class main"""


class Square():
    """square class"""

    def __init__(self, size=0, position=(0, 0)):
        """ Instance of class Square
    Arguments:
        @size: size of side of square
        @position: postion of spaces"""

        self.__size = size
        self.__position = position
        if type(size) != int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        if (type(position) != tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        if ((type(position[0]) != int) or (type(position[1]) != int)):
            raise TypeError("position must be a tuple of 2 positive integers")

    def area(self):
        """ area of square
        Return:
                area of square."""
        return self.__size ** 2

    @property
    def size(self):
        """ getter of size
    Return:
            value of size"""
        return self.__size

    @size.setter
    def size(self, value):
        """ setter of the size
    Arguments:
        value: value of size"""
        self.__size = value
        if type(value) != int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")

    @property
    def position(self):
        """ getter of position
    Return:
            value of position"""
        return self.__position

    @position.setter
    def position(self, value):
        """ setter of the position
    Arguments:
        value: value of postion"""
        self.__position = value
        if (type(value) != tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        if ((type(value[0]) != int) or (type(value[1]) != int)):
            raise TypeError("position must be a tuple of 2 positive integers")

    def my_print(self):
        """ square made using the character #
            or a blank line if @size == 0"""
        if (self.__size == 0):
            print("")
        for i in range(self.__size):
            print((self.__position[0] * " ") + ("#" * self.__size))
