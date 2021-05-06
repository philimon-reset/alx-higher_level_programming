#!/usr/bin/python3
def roman_to_int(roman_string):
    if (not isinstance(roman_string, str)) and (not None):
        return 0
    total = 0
    dic_t = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100,
             'D' : 500, 'M' : 1000}
    if roman_string[0] == 'I':
            total = -1
    for i in roman_string:
            total = dic_t[i] + total
    return total
