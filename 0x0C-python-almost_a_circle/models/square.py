#!/usr/bin/python3
""" square class """
from models.Rectangle import Rectangle


class Square(Rectangle):
    """ square class with rectangle and base inheritance """
    def __init__(self, size, x=0, y=0, id=None):
        """ init """
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ staright printed value of instance """
        return "[Square] ({}) {}/{} - {}/{}".format(self.id, self.x,
                                                    self.y, self.width)
