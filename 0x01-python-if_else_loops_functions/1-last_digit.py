#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    temp = int(str(number)[-1])
    print("Last digit of {:n} is -{} and {}".format(number, str(number)[-1], temp))
else:
    temp = number % 10
    if (int(str(number)[-1]) > 5):
        temp = "is greater than 5"
    elif (int(str(number)[-1]) < 6 and ):
        temp = "is less than 6 and not 0"
    elif (int(str(number)[-1]) == 0):
        temp = "is 0"
    print("Last digit of {:n} is {} and {}".format(number, str(number)[-1], temp))
