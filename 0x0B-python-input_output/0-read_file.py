#!/usr/bin/python3
def read_file(filename=""):
    """ read to stdout """
    with open(filename, enncoding="utf-8") as mfile:
        mfile.read()
