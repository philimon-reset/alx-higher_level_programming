#!/usr/bin/python3
for i in range(100):
    if (i != 99):
        print("{:02n}".format(i), end=", ")
    elif (i == 99):
        print("{:02n}".format(i))
