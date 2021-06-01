#!/usr/bin/python3
""" start doc """

def pascal_triangle(n):
  """ interview question """
  large = []
  if n <= 0:
      return large
  for a in range(1, n+1):
      temp = []
      for v in range(0, a):
          temp.append(1)
      large.append(temp)

  for i in range(1, n):
      for b in range(i, 0, -1):
          large[i][b - 1] = large[i - 1][b - 2] + large[i - 1][b - 1]
          large[i][i] = 1
          large[i][0] = 1
  return large
  
