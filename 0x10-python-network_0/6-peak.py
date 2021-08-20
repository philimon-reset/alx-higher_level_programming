#!/usr/bin/python3
<<<<<<< HEAD
""" contains find_peak """


def find_peak(list_of_integers):
    """finds a peak in a list of unsorted integers"""
    if (not list_of_integers):
        return None
    if (len(list_of_integers) <= 2):
        return max(list_of_integers)
    peak = None
    if (list_of_integers[0] >= list_of_integers[1]):
        peak = list_of_integers[0]
    if (list_of_integers[-1] >= list_of_integers[-2]):
        peak = list_of_integers[-1]
    if (peak):
        return peak
    i = 1
    while (i < len(list_of_integers) - 1):
        if (list_of_integers[i] >= list_of_integers[i + 1] and
                list_of_integers[i] >= list_of_integers[i - 1]):
            return list_of_integers[i]
        else:
            i += 1
    return peak
=======
import time
from random import randint
""" Module starting point
    """


def find_peak(list_of_integers):
    """ try to find the peak """
    if not len(list_of_integers):
                return (None)
    return max(list_of_integers)

if __name__ == '__main__':
    print(find_peak([4, 2, 1, 2, 3, 1]))
>>>>>>> 8383a837... 1st
