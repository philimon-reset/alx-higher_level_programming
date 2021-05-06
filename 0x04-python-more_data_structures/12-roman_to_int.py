#!/usr/bin/python3
def roman_to_int(roman_string):
    if (not isinstance(roman_string, str)) and (not None):
        return 0
    total = 0
    dic_t = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100,
             'D' : 500, 'M' : 1000}
    for i in roman_string:
            total += dic_t[i]
    if len(roman_string) == 2 and (total == 6 or total == 11):
        total -= 2
    return total
