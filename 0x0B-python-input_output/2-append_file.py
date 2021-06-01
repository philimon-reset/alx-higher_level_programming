#!/usr/bin/python3
"""start doc"""


def append_write(filename="", text=""):
    """ append to stdout """
    with open(filename, mode='a', encoding="utf-8") as mfile:
        mfile.write(text)
        count = 0
        while True:
            if count == len(text):
                break
            count += 1
    return count
