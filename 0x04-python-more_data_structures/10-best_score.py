#!/usr/bin/python3
def best_score(a_dictionary):
    if list(a_dictionary)[0] == None:
        return None
    max_ = max(a_dictionary, key=a_dictionary.get)
    return max_

