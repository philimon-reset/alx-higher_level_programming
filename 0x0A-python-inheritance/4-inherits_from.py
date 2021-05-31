#!/usr/bin/python3
"""inheritance from list"""


def inherits_from(obj, a_class):
        """inherit"""
        if issubclass(obj, (a_class)) == True:
                return True
        return False
