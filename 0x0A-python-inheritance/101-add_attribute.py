#!/usr/bin/python3
"""look up class"""


def add_attribute(obj, name, value):
    """start of lookup"""
    if hasattr(obj, name):
        raise TypeError("can't add new attribute")    
    setattr(obj, name, value)
