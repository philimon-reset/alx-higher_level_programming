#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if ord(str) > 96 and ord(str) < 123:
            i = ord(str) - 32
    print("{}".format(i), end="")
