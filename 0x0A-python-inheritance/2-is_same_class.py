#!/usr/bin/python3
"""inheritance from list"""


def is_same_class(obj, a_class):
        """ same class """
        if isinstance(obj, (a_class)) and type(obj) is a_class:
                return True
        return False
