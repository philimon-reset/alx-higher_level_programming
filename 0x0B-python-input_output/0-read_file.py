#!/usr/bin/python3
def read_file(filename=""):
    with open(filename, enncoding="utf-8") as mfile:
        sys.stdout.write(mfile)
