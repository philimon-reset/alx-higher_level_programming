#!/usr/bin/python3
"""inheritance from list"""


def is_same_class(obj, a_class):
        """ same class """
        if type(a_class) == a_class:
                return False
        if isinstance(obj, (a_class)) and not issubclass(type(obj), (a_class)):
                return True
        return False
