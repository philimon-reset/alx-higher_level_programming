#!/usr/bin/python3
"""contains Square class to represent squares"""
from models.rectangle import Rectangle


class Square(Rectangle):
    """class to represent a Square"""
    def __init__(self, size, x=0, y=0, id=None):
        """Instantiation of a Square object
        Args:
            size (int): the size of the square
            x (int): the x coordinate
            y (int): the y coordinate
            id (int): the id of the object
        """
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ staright printed value of instance """
        return "[Square] ({}) {}/{} - {}/{}".format(self.id, self.x,
                                                    self.y, self.width)
