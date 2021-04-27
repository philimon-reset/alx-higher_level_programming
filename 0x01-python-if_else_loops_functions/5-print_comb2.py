#!/usr/bin/python3
for i in range(10):
    for a in range(10):
        if (i != 9 or a != 9):
            print("{}{}".format(i, a), end=", ")
        elif (i == 9 and a == 9):
            print("{}{}".format(i, a), end="")
