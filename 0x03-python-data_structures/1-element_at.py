#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < 0 or idx >= len(my_list):
        return (None)
    print("{}".format(my_list[idx]))
