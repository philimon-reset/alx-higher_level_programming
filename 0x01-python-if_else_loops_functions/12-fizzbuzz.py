#/usr/bin/python3

def fizzbuzz():
    for num in range(1,100):
        str_ = ""
        if num % 3 == 0:
            str_ = str_ + "Fizz"
        if num % 5 == 0:
            str_ = str_ + "Buzz"
        if num % 5 != 0 and num % 3 != 0:
            str_ = str_ + str(num)
        print(str_)
