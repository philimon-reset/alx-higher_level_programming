
#!/usr/bin/python3
"""Contains Rectangle class"""
from models.base import Base


class Rectangle(Base):
    """Rectangle Class to represent a rectangle"""
    def __init__(self, width, height, x=0, y=0, id=None):
        """instantiation"""
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        """width property getter"""
        return self.__width

    @property
    def height(self):
        """height property getter"""
        return self.__height

    @property
    def x(self):
        """x property getter"""
        return self.__x

    @property
    def y(self):
        """y property getter"""
        return self.__y

    @width.setter
    def width(self, value):
        """width property setter"""
        if type(value) is not int:
            raise TypeError("width must be an integer")
        if value <= 0:
            raise ValueError("width must be > 0")
        self.__width = value

    @height.setter
    def height(self, value):
        """height property setter"""
        if type(value) is not int:
            raise TypeError("height must be an integer")
        if value <= 0:
            raise ValueError("height must be > 0")
        self.__height = value

    @x.setter
    def x(self, value):
        """x property setter"""
        if type(value) is not int:
            raise TypeError("x must be an integer")
        if value < 0:
            raise ValueError("x must be >= 0")
        self.__x = value

    @y.setter
    def y(self, value):
        """y property setter"""
        if type(value) is not int:
            raise TypeError("y must be an integer")
        if value < 0:
            raise ValueError("y must be >= 0")
        self.__y = value
