#!/usr/bin/python3
def best_score(a_dictionary):
    total = 0
    if a_dictionary == None:
        return None
    max_ = list(a_dictionary.values())[0]
    for i in a_dictionary:
        if a_dictionary[i] > max_:
            max_ = a_dictionary[i]
            total += a_dictionary[i]
    if total == 0:
        return None
    return i
