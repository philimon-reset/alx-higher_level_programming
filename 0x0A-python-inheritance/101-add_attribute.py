#!/usr/bin/python3
"""look up class"""


def add_attribute(obj, name, value):
    """start of lookup"""
    if not hasattr(obj, name):
        raise TypeError("can't add new attribute")
    else:
        setattr(obj, name, value)
