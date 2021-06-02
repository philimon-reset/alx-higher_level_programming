#!/usr/bin/python3
"""look up class"""


def add_attribute(obj, name, value):
    """start of lookup"""
    if not hasattr(obj, obj.__dict__):
        raise TypeError("can't add new attribute")
    setattr(obj, name, value)
