#!/usr/bin/python3
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
    big_boi = [randint(-10000, 10000) for i in range(10000000)]
    start = time.time()
    print(find_peak(big_boi), time.time() - start)
