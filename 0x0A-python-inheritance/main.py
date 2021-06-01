#!/usr/bin/python3
Rectangle = __import__('8-rectangle').Rectangle
BaseGeometry = __import__('7-base_geometry').BaseGeometry

print(issubclass(Rectangle, BaseGeometry))
