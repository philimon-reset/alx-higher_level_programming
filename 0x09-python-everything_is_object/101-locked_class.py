#!/usr/bin/python3
"""main class to be created"""


class LockedClass():
    """locked class for one attribute"""
    __slots__ = ["first_name"]

    def __init__(self, first_name):
        """assigined set attribute"""
        self.first_name = first_name
