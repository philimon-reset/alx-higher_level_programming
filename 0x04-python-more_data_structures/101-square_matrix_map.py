#!/usr/bin/python3
def square_matrix_map(matrix=[]):   
    return [x ** 2 for x in list(map(lambda x: x, matrix))]
