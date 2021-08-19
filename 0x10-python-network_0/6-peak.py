#!/usr/bin/python3
""" Module starting point
    """


def find_peak(list_of_integers):
    """ try to find the peak """
    if not len(list_of_integers):
                return (None)
    max2 = list_of_integers[0]
    for x in range(len(list_of_integers) - 1):
        if list_of_integers[x + 1] >= list_of_integers[x]:
            max2 = list_of_integers[x + 1]
    return max2
