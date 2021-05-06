#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary not None:
        max_ = max(a_dictionary, key=a_dictionary.get)
        return max_
    return None
