#!/usr/bin/python3
"""contains append_after"""


def append_after(filename="", search_string="", new_string=""):
    """ append after given string """
    with open(filename, mode='r+', encoding="utf-8") as mfile:
        a = 0
        ls = mfile.readlines()
        for i in ls:
            if search_string in i:
                ls.insert(a + 1, new_string)
            a += 1
        mfile.seek(0)
        for i in ls:
            mfile.write(i)
