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
    if sys.argv[2] == ls[0]:
        print("{:n} + {:n} = {:n}".format(int(sys.argv[1]), int(sys.argv[3]), add(int(sys.argv[1]), int(sys.argv[3]))))
        sys.exit(0)
    elif sys.argv[2] == ls[1]:
        print("{:n} - {:n} = {:n}".format(int(sys.argv[1]), int(sys.argv[3]), sub(int(sys.argv[1]), int(sys.argv[3]))))
        sys.exit(0)
    elif sys.argv[2] == ls[2]:
        print("{:n} * {:n} = {:n}".format(int(sys.argv[1]), int(sys.argv[3]), mul(int(sys.argv[1]), int(sys.argv[3]))))
        sys.exit(0)
    elif sys.argv[2] == ls[3]:
        print("{:n} / {:n} = {:n}".format(int(sys.argv[1]), int(sys.argv[3]), div(int(sys.argv[1]), int(sys.argv[3]))))
        sys.exit(0)
