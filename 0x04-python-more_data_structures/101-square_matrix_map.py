#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    new = [x for x in matrix]
    return list(map(lambda x: x ** 2, new))
