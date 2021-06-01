#!/usr/bin/python3
"""start doc"""


class Student():
    """ student info gather"""
    def __init__(self, first_name, last_name, age):
        """ init """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """ class to json """
        if attrs != None and self not in attrs:
            for i in attrs:
                return i.__dict__
        else
            return self.__dict__
