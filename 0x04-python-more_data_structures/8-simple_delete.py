#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    a_dictionary = [del a_dictionary[x] for x in a_dictionary if x == key]
    return a_dictionary
