#!/usr/bin/python3
class Square():
    """square class"""
    def __init__(self, size=0, position=(0, 0)):
        """ Instance of class Square
    Arguments:
        @size: size of side of square
        @position: amount of spaces used"""
        self.size = size
        self.position = position

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
        @value: value of size"""
        self.__size = value
        if type(value) != int:
            raise TypeError("size must be integer")
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
        @value: value of postion"""
        self.__position = value
        if (type(value) != tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        if ((type(value[0]) != int) or (type(value[1]) != int)):
            raise TypeError("position must be a tuple of 2 positive integers")

    def my_print(self):
        """ square made using the character #
            or a blank line if @size == 0"""
        if (self.size == 0)
            print("")
        for i in range(self.size):
            print("#" * self.size)

    def area(self):
        """ area of square
            Return:
                    area of square."""
        return self.__size ** 2
