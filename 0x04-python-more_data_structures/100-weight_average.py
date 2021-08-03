#!/usr/bin/python3
def weight_average(my_list=[]):
    if len(my_list) == 0:
        return 0
    total = 0
    div = 0
    for i in my_list:
        div += i[1]
        total += i[0] * i[1]
    total /= div
    return total
