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
        new = self.__dict__
        for i in attrs:
            if i in [self.first_name, self.last_name, self.age]:
                new[i].append(i.__dict__)
        return new
