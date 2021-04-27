#!/usr/bin/python3
for i in range(0, 100):
    if (len(str(i)) < 2):
        print("0{}".format(i), end=", ")
    elif (len(str(i)) == 2 and i != 99):
        print("{}".format(i), end=", ")
    print("{}".format(i))
