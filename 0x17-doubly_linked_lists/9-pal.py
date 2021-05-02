#!/usr/bin/python3
n = 0
for a in range(999, 99, -1):
    for b in range(a, 99, -1):
        x = a * b
        if (x > n):
            s = str(a * b)
            if (s == s[::-1]):
                n = a * b
with open('102-result', 'w') as result:
    result.write(str(n))
