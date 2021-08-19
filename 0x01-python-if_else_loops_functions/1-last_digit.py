#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    temp2 = -1 * int(str(number)[-1])
else:
    temp2 = number % 10
if (temp2 > 5):
    temp = "is greater than 5"
elif (temp2 < 6 and temp2 != 0):
    temp = "is less than 6 and not 0"
elif (temp2 == 0):
    temp = "is 0"
print("Last digit of {:n} is {} and {}".format(number, temp2, temp))
