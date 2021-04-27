#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if ord(str[i]) > 96 and ord(str[i]) < 123:
            i = ord(str[i]) - 32
    print("{}".format(i), end="")
