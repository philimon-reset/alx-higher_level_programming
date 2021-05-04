#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    from calculator_1 import add, sub, mul, div
    ls = ['+', '-', '*', '/']
    if (len(sys.argv) != 4):
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    elif sys.argv[2] not in ls:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)
    a = int(sys.argv[1])
    b = int(sys.argv[3])
    if sys.argv[2] == ls[0]:
        print("{:n} + {:n} = {:n}".format(a, b, add(a, b)))
        sys.exit(0)
    elif sys.argv[2] == ls[1]:
        print("{:n} - {:n} = {:n}".format(a, b, sub(a, b)))
        sys.exit(0)
    elif sys.argv[2] == ls[2]:
        print("{:n} * {:n} = {:n}".format(a, b, mul(a, b)))
        sys.exit(0)
    elif sys.argv[2] == ls[3]:
        print("{:n} / {:n} = {:n}".format(a, b, div(a, b)))
        sys.exit(0)
