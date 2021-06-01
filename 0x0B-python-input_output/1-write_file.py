#!/usr/bin/python3
"""start doc"""


def write_file(filename="", text=""):
    """ write to stdout """
    with open(filename, mode='w', encoding="utf-8") as mfile:
        mfile.write(text)
        count = 0
        for i in text:
            count += 1
    return count
