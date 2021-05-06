#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    square = lambda x: x ** 2
    new = matrix[:]
    for i in new:
        i = list(map(square, i))
    print(new)
