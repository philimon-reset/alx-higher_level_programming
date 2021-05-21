#!/usr/bin/python3
def matrix_divided(matrix, div):
        """ matrix_divided
        Arguments:
        @matrix: matrix to be changed
        @div: divisable number"""
        if not isinstance(matrix, list):
                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
        elif not isinstance(div, int) and not isinstance(div, float):
                raise TypeError("div must be a number")
        elif div == 0:
                raise ZeroDivisionError("division by Zero")
        for i in range(len(matrix)):
                if not isinstance(matrix[i], list):
                        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
                for x in matrix[i]:
                        if not isinstance(x, int) and not isinstance(x, float):
                                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
                L = len(matrix[0])
                if len(matrix[i]) != L:
                        raise TypeError("Each row of the matrix must have the same size")
        large = []
        for i in range(len(matrix)):
                new = []
                for x in matrix[i]:
                        a = round(x/div, 2)
                        new.append(a)
                large.append(new)
        return large
