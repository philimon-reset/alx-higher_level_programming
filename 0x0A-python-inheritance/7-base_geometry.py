#!/usr/bin/python3
"""base geometry class"""


class BaseGeometry():
        """base geometry class main part"""
        def area(self):
                """area of class"""
                raise Exception("area() is not implemented")

        def integer_validator(self, name, value):
                """integer checker"""
                if not isinstance(value, int):
                        raise TypeError("{} must be an integer".format(name))
                if value <= 0:
                        raise ValueError("{} must be greater than 0".format(name))
