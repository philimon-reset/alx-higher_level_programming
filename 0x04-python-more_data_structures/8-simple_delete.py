#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    for i in a_dictionary:
        if i == key:
            break;
    del a_dictionary[i]
    return a_dictionary
