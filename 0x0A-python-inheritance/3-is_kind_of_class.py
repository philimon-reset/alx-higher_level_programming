#!/usr/bin/python3
"""inheritance from list"""


def is_kind_of_class(obj, a_class):
        """inherited or same"""
        if isinstance(obj, a_class) or issubclass(obj, a_class):
                return True
        return False
