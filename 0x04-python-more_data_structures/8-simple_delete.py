#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    a = [x for x in a_dictionary if x == key]
    for i in a:
        del a_dictionary[a]
    return a_dictionary
