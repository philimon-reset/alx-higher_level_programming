#!/usr/bin/python3
""" Rectangle class """
from models.Base import Base


class Rectangle(Base):
    """ Rectangle class with base inheritance """
    def __init__(self, width, height, x=0, y=0, id=None):
        """ init """
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y
