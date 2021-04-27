#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if ord(i) > 96 and ord(i) < 123:
            i = ord(i) - 32
        else:
            i = ord(i)
    print("{:c}".format(i), end="")
