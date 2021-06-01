#!/usr/bin/python3
"""start doc"""


class Student():
    """ student info gather"""
    def __init__(self, first_name, last_name, age):
        """ init """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
    def to_json(self):
        """ class to json """
        return Student.__dict__
