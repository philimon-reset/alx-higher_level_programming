#!/usr/bin/python3


def print_last_digit(number):
        new = (str(number))[-1]
        if (number < 0):
                new = int(new)
        print("{}".format(new), end="")
        return new
