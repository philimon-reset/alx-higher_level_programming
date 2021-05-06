#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    if value not in a_dictionary.values():
        return a_dictionary
    keys = []
    vals = []
    for key in a_dictionary.keys():
        if a_dictionary[key] != value:
            keys.append(key)
            vals.append(a_dictionary[key])
    a_dictionary.clear()
    a_dictionary.update(dict([(k, v) for k, v in zip(keys, vals)]))
    return a_dictionary
