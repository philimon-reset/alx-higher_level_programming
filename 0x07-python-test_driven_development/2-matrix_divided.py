#!/usr/bin/python3
def matrix_divided(matrix, div):
        """ matrix_divided
        Arguments:
        @matrix: matrix to be changed
        @div: divisable number"""
        error_1 = "matrix must be a matrix (list of lists) of integers/floats"
        error_2 = "Each row of the matrix must have the same size"
        div_error = "div must be a number"
        if not isinstance(matrix, list):
                raise TypeError(error_1)
        if len(matrix) == 0:
                return
        elif not isinstance(div, int) and not isinstance(div, float):
                raise TypeError(div_error)
        elif div == 0:
                raise ZeroDivisionError("division by zero")
        for i in range(len(matrix)):
                if not isinstance(matrix[i], list):
                        raise TypeError(error_1)
                for x in matrix[i]:
                        if not isinstance(x, int) and not isinstance(x, float):
                                raise TypeError(error_1)
                L = len(matrix[0])
                if len(matrix[i]) != L:
                        raise TypeError(error_2)
        large = []
        for i in range(len(matrix)):
                new = []
                for x in matrix[i]:
                        a = round(float(x)/float(div), 2)
                        new.append(a)
                large.append(new)
        return large
