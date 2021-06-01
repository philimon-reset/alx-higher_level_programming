#!/usr/bin/python3
"""start doc"""
import json


def save_to_json_file(my_obj, filename):
    """ append to stdout """
    with open(filename, mode='w') as mfile:
        json.dump(my_obj, mfile)
