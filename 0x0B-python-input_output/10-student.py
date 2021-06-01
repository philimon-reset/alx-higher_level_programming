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
        if attrs == None:
            return self.__dict__
        temp = self.__dict__.keys()
        new = {}
        for i in attrs:
            if i in temp:
                new.update(i=i.__dict__)
        return new
