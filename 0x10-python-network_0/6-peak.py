#!/usr/bin/python3
""" Module starting point
    """


def find_peak(list_of_integers):
    """ try to find the peak """
    if not len(list_of_integers):
                return (None)
    return max(list_of_integers)