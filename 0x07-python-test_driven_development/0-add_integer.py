#!/usr/bin/python3
def add_integer(a, b=98):
        """ add integer 
    Arguments:
        @a: first integer
	@b: second integer"""
	if not isinstance(a, int) and not isinstance(a, float):
		raise TypeError("a not int")
	if not isinstance(b, int) and not isinstance(b, float):
		raise TypeError("b not int")
	return int(a) + int(b)
