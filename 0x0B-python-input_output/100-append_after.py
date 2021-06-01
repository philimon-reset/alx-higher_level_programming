#!/usr/bin/python3
"""contains append_after"""


def append_after(filename="", search_string="", new_string=""):
    """ inserts a line of text to a file"""
    with open(filename, "r+", encoding="utf-8") as f:
        content = f.readlines()
        f.seek(0)
        f.truncate(0)
        for i in range(len(content)):
            f.write(content[i])
            if search_string in content[i]:
                f.write(new_string)
