#!/usr/bin/python3
def best_score(a_dictionary): 
    max = 0
    total = 0
    if a_dictionary == None:
        return None
    for i in a_dictionary:
        if a_dictionary[i] > max:
            max = a_dictionary[i]
            total += a_dictionary[i]
    if total == 0:
        return None
    return i
