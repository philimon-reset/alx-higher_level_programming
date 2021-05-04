#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    result = []
    for i in range(2):
        sum_temp = 0
        try:
            sum_temp += tuple_a[i]
        except:
            pass
        try:
            sum_temp += tuple_b[i]
        except:
            pass
        result.append(sum_temp)
    return tuple(result)
