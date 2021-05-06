#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    a_dictionary = map(lambda i: del a_dictionary[i] if i == key, a_dictionary)
    return a_dictionary
