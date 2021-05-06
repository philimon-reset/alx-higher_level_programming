#!/usr/bin/python3
def roman_to_int(roman_string):
    if (not isinstance(roman_string, str)) or (not roman_string):
        return 0
    total = 0
    dic_t = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100,
             'D': 500, 'M': 1000}
    check = ['IV', 'IX', 'XL', 'XC', 'XL', 'CD', 'CM']
    for i in roman_string:
        total += dic_t[i]
    for a in check:
        if a in roman_string:
            total -= (2 *(dic_t[a[0]]))
    return total
