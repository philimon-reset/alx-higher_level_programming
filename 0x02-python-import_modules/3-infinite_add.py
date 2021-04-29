#!/usr/bin/python3
import sys
total = 0
for i in range(1, len(sys.argv)):
  total = sum(int(sys.argv[i]), total)
print("{:n}".format(total))
