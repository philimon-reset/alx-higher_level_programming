#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for i in matrix:
        for a in range(len(i) - 1):
            if a < len(i) - 1:
                print("{:d}".format(i[a]), end=" ")
            print("{:d}".format(i[a]))
