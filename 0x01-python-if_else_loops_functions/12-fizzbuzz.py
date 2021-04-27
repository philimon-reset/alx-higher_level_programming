#!/usr/bin/python3


def fizzbuzz():
    for num in range(1, 101):
        str_a = ""
        if num % 3 == 0:
            str_a += "Fizz"
        if num % 5 == 0:
            str_a += "Buzz"
        if num % 5 != 0 and num % 3 != 0:
            str_a += str(num)
        print("{} ".format(str_a), end="")
