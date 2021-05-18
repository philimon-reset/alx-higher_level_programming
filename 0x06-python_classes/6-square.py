#!/usr/bin/python3
class Square():
    def __init__(self, size=0, position=(0, 0)):
        self.size = size
        self.position = position

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        self.__size = value
        if type(value) != int:
            raise TypeError("size must be integer")
        elif value < 0:
            raise ValueError("size must be >= 0")

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        self.__position = value
        if (type(value) != tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        if ((type(value[0]) != int) or (type(value[1]) != int)):
            raise TypeError("position must be a tuple of 2 positive integers")

    def my_print(self):
        if (self.__size == 0):
            print("")
        else:
            for i in range(self.size):
                print((self.__position[0] * " ") + ("#" * self.__size))

    def area(self):
        return self.__size ** 2
