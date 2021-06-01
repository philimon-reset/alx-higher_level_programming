#!/usr/bin/python3
""" start doc """


def pascal_triangle(n):
    """ interview question """
    l = []
    if n <= 0:
        return l
    for a in range(1, n+1):
        temp = []
        for v in range(0, a):
            temp.append(1)
        l.append(temp)

    for i in range(1, n):
        for b in range(i, 0, -1):
            l[i][b - 1] = l[i - 1][b - 2] + l[i - 1][b - 1]
            l[i][i] = 1
            l[i][0] = 1
    return l
