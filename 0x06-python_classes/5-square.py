class Square():
    def __init__(self, size=0):
        self.__size = size
        if type(size) != int:
            raise TypeError("size must be integer")
        elif size < 0:
            raise ValueError("size must be >= 0")

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        self.__size = value
        if type(value) != int:
            raise TypeError("size must be integer")
        elif value < 0:
            raise ValueError("size must be >= 0")

    def my_print(self):
        for i in range(self.size):
            print("#" * self.size)

    def area(self):
        return self.__size ** 2
