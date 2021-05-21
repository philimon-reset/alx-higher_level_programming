#!/usr/bin/python3
def print_square(size):
        if isinstance(size, float) and size < 0:
                raise TypeError("size must be integer")
        elif not isinstance(size, int):
                raise TypeError("size must be integer")
        elif size < 0:
                raise TypeError("size must be >= 0")
        elif size == 0:
                print()
        for row in range(1, size + 1):
                print("#" * size)
