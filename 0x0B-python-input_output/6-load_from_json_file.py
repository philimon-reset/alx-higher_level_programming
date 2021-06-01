#!/usr/bin/python3
"""start doc"""
import json


def load_from_json_file(filename):
    """ load json from file """
    with open(filename, mode='w') as mfile:
        return json.load(mfile)
