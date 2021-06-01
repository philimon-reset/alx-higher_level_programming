#!/usr/bin/python3
"""start doc"""


def read_file(filename=""):
    """ read to stdout """
    with open(filename, mode='r', encoding="utf-8") as mfile:
        print(mfile.read(), end="")
