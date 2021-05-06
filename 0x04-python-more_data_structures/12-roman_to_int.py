#!/usr/bin/python3
def roman_to_int(roman_string):
    if (not isinstance(roman_string, str)) and (not None):
        return 0
    total = 0
    dic_t = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100,
             'D' : 500, 'M' : 1000}
    for i in roman_string:
        if i in dic_t:
            total += dic_t[i]
    return total
