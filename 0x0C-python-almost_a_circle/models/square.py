#!/usr/bin/python3
""" square class """
Rectangle = __import__("rectangle").Rectangle


class Square(Rectangle):
    """ square class with rectangle and base inheritance """
    def __init__(self, size, x=0, y=0, id=None):
        """ init """
        self.size = size
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ straight printed value of instance of square """
        return f"[Square] ({self.id}) {self.x}/{self.y} - {self.size}"

    @property
    def size(self):
        """ returns size """
        return self.__size

    @size.setter
    def size(self, value):
        """ set width and height to same value """
        self.width = value
        self.height = value
        self.__size = value

    def update(self, *args, **kwargs):
        """ update value of square attributes """
        a = ["id", "size", "x", "y"]
        if len(args) != 0 and args is not None:
            for i in range(len(args)):
                if i > len(a) - 1:
                    break
                setattr(self, a[i], args[i])
        else:
            for i in kwargs.keys():
                if i in a:
                    setattr(self, i, kwargs[i])

    def to_dictionary(self):
        """ list rep of instances """
        temp = {}
        a = ["id", "size", "x", "y"]
        for i in a:
            temp[i] = getattr(self, i)
        return temp


if __name__ == "__main__":

    s1 = Square(5)
    print(s1)

    s1.update(10)
    print(s1)

    s1.update(1, 2)
    print(s1)

    s1.update(1, 2, 3)
    print(s1)

    s1.update(1, 2, 3, 4)
    print(s1)

    s1.update(x=12)
    print(s1)

    s1.update(size=7, y=1)
    print(s1)

    s1.update(size=7, id=89, y=1)
    print(s1)
