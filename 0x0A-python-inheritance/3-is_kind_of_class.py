#!/usr/bin/python3
"""inheritance from list"""


""" check if its the same class """
        def is_kind_of_class(obj, a_class):
                if isinstance(obj, a_class) or issubclass(obj, a_class):
                        return True
                return False
