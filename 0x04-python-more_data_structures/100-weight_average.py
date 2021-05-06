#!/usr/bin/python3
def weight_average(my_list=[]):
    if len(my_list == 0):
        return 0
    mul = 0
    total = 0
    div = 0
    for i in my_list:
        mul = i[0] * i[1]
        div += i[1]
        total += mul
    total /= div
    return total
