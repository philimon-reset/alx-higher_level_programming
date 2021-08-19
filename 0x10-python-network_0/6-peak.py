#!/usr/bin/python3
def find_peak(list_of_integers):
        if not len(list_of_integers):
                return (None)
        max = list_of_integers[0]
        for x in range(len(list_of_integers) - 1):
                if list_of_integers[x + 1] >= list_of_integers[x]:
                        max = list_of_integers[x + 1]
        return max


if __name__ == '__main__':
        print(find_peak([1, 2, 4, 6, 3]))
        print(find_peak([4, 2, 1, 2, 3, 1]))
        print(find_peak([2, 2, 2]))
        print(find_peak([]))
        print(find_peak([-2, -4, 2, 1]))
        print(find_peak([4, 2, 1, 2, 2, 2, 3, 1]))