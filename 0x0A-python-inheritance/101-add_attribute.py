#!/usr/bin/python3
"""look up class"""


def add_attribute(obj, name, value):
    """start of lookup"""
    if hasattr(obj, value) == False:
        raise TypeError("can't add new attribute")  
    setattr(obj, value, name)
