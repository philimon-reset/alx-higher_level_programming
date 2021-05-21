def matrix_divided(matrix, div):
    """ diivdes a matrix
        Arguments:
                 @matrix: matrix to be divided
                 @div: dividend
    """
    if type(div) not in [int, float]:
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    if len(matrix) == 0:
        return
    new_matrix = []
    row_length = len(matrix[0])
    type_err = "matrix must be a matrix (list of lists) of integers/floats"
    for i in range(len(matrix)):
        if len(matrix[i]) != row_length:
            raise TypeError("Each row of the matrix must have the same size")
        for j in matrix[i]:
            if type(j) not in [int, float]:
                raise TypeError(type_err)
    for i in range(len(matrix)):
        temp = []
        for j in range(row_length):
            temp.append(round(matrix[i][j] / float(div), 2))
        new_matrix.append(temp)
    return new_matrix
