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
        """ class to json
            @attrs: attribute list"""
        if attrs is None:
            return self.__dict__
        temp = self.__dict__.keys()
        new = {}
        for i in attrs:
            if type(i) != str:
                return self.__dict__
            if i in temp:
                new.update({i: self.__dict__[i]})
        return new

    def reload_from_json(self, json):
        """replace all attriubtes"""
        for i in json:
            self.__dict__[i] = json[i]
