#!/usr/bin/python3
def no_c(my_string):
    new_ = ""
    for i in range(len(my_string) - 1):
        if my_string[i] not in "cC":
            new_ += my_string[i]
    return (new_)
