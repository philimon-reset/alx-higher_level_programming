#!/usr/bin/python3
"""start doc"""
import json


def save_to_json_file(my_obj, filename):
    """ load json from file """
    with open(filename, mode='w') as mfile:
        json.load(mfile, my_obj)
