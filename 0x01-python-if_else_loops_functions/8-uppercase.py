#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if 122 >= ord(i) >= 97:
            i = (ord(i) - 32)
        print("{:c}".format(i), end="")
    print("")
