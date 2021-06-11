#!/usr/bin/python3
import unittest
import json
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square


class TestBaseCls(unittest.TestCase):
    def test_id(self):
        Base._Base__nb_objects = 0
        b1 = Base()
        b2 = Base()
        b12 = Base(12)
        b3 = Base()
        self.assertEqual(b1.id, 1)
        self.assertEqual(b2.id, 2)
        self.assertEqual(b12.id, 12)
        self.assertEqual(b3.id, 3)

    def test_ToJsonString(self):
        Base._Base__nb_objects = 0
        temp = Base.to_json_string([])
        self.assertEqual(temp, "[]")
        temp = Base.to_json_string(None)
        self.assertEqual(temp, "[]")
        temp2 = [{'x': 2, 'width': 10, 'id': 1, 'height': 7, 'y': 8}]
        temp = Base.to_json_string(temp2)
        self.assertEqual(temp, json.dumps(temp2))
        temp = Base.to_json_string([{}])
        self.assertEqual(temp, json.dumps([{}]))
        temp = Base.to_json_string([None])
        self.assertEqual(temp, json.dumps([None]))
        temp = Base.to_json_string([{"a": None}])
        self.assertEqual(temp, json.dumps([{"a": None}]))

    def test_FromJsonString(self):
        Base._Base__nb_objects = 0
        temp = Base.from_json_string(json.dumps([]))
        self.assertEqual(temp, [])
        temp = Base.from_json_string(None)
        self.assertEqual(temp, [])
        temp2 = [{'x': 2, 'width': 10, 'id': 1, 'height': 7, 'y': 8}]
        json_str = json.dumps(temp2)
        temp = Base.from_json_string(json_str)
        self.assertEqual(temp, json.loads(json_str))

# why wont u work :(
    def test_save_to_file_Rect(self):
        Base._Base__nb_objects = 0
        Rectangle.save_to_file(None)

        with open("Rectangle.json", "r") as file:
            contents = file.read()
            expected = """[]"""
            self.assertEqual(contents, expected)

        Base._Base__nb_objects = 0
        r1 = Rectangle(10, 7, 2, 8)
        Rectangle.save_to_file([r1])

        with open("Rectangle.json", "r") as file:
            contents = file.read()
            e = """[{"id": 1, "width": 10, "height": 7, "x": 2, "y": 8}]"""
            self.assertEqual(contents, e)

        Base._Base__nb_objects = 0
        r1 = Rectangle(10, 7, 2, 8)
        r2 = Rectangle(2, 4)
        Rectangle.save_to_file([r1, r2])

        with open("Rectangle.json", "r") as file:
            contents = file.read()
            e = """[{"id": 1, "width": 10, "height": 7, "x": 2, "y": 8}, """
            e2 = """{"id": 2, "width": 2, "height": 4, "x": 0, "y": 0}]"""
            self.assertEqual(contents, e + e2)

        r1 = Rectangle(20, 50, 22, 89)
        r2 = Rectangle(2, 4, 5)
        r3 = Rectangle(2, 2)
        Rectangle.save_to_file([r1, r2, r3])

        with open("Rectangle.json", "r") as file:
            contents = file.read()
            e = """[{"id": 3, "width": 20, "height": 50, "x": 22, "y": 89}, """
            e2 = """{"id": 4, "width": 2, "height": 4, "x": 5, "y": 0}, """
            e3 = """{"id": 5, "width": 2, "height": 2, "x": 0, "y": 0}]"""
            self.assertEqual(contents, e + e2 + e3)

    def test_save_to_file_square(self):
        Base._Base__nb_objects = 0
        Square.save_to_file(None)

        with open("Square.json", "r") as file:
            contents = file.read()
            expected = """[]"""
            self.assertEqual(contents, expected)

        Base._Base__nb_objects = 0
        r1 = Square(10, 2, 8)
        Square.save_to_file([r1])

        with open("Square.json", "r") as file:
            contents = file.read()
            expected = """[{"id": 1, "size": 10, "x": 2, "y": 8}]"""
            self.assertEqual(contents, expected)

        Base._Base__nb_objects = 0
        r1 = Square(10, 2, 8)
        r2 = Square(2)
        Square.save_to_file([r1, r2])

        with open("Square.json", "r") as file:
            contents = file.read()
            expected = """[{"id": 1, "size": 10, "x": 2, "y": 8}, """
            expected2 = """{"id": 2, "size": 2, "x": 0, "y": 0}]"""
            self.assertEqual(contents, expected + expected2)

        r1 = Square(20, 22, 89)
        r2 = Square(2, 5)
        r3 = Square(2)
        Square.save_to_file([r1, r2, r3])

        with open("Square.json", "r") as file:
            contents = file.read()
            expected = """[{"id": 3, "size": 20, "x": 22, "y": 89}, """
            expected2 = """{"id": 4, "size": 2, "x": 5, "y": 0}, """
            expected3 = """{"id": 5, "size": 2, "x": 0, "y": 0}]"""
            self.assertEqual(contents, expected + expected2 + expected3)

    def test_load_to_file_rect(self):
        Base._Base__nb_objects = 0
        Rectangle.save_to_file(None)
        contents = Rectangle.load_from_file()
        expected = []
        self.assertEqual(contents, expected)

        Base._Base__nb_objects = 0
        r1 = Rectangle(10, 7, 2, 8)
        Rectangle.save_to_file([r1])
        contents = Rectangle.load_from_file()
        expected = [r1]
        for i in range(len(contents)):
            self.assertEqual(vars(contents[i]), vars(expected[i]))

        Base._Base__nb_objects = 0
        r1 = Rectangle(10, 7, 2, 8)
        r2 = Rectangle(2, 4)
        Rectangle.save_to_file([r1, r2])
        contents = Rectangle.load_from_file()
        expected = [r1, r2]
        for i in range(len(contents)):
            self.assertEqual(vars(contents[i]), vars(expected[i]))

        r1 = Rectangle(20, 50, 22, 89)
        r2 = Rectangle(2, 4, 5)
        r3 = Rectangle(2, 2)
        Rectangle.save_to_file([r1, r2, r3])
        contents = Rectangle.load_from_file()
        expected = [r1, r2, r3]
        for i in range(len(contents)):
            self.assertEqual(vars(contents[i]), vars(expected[i]))

    def test_load_to_file_square(self):
        Base._Base__nb_objects = 0
        Square.save_to_file(None)
        contents = Square.load_from_file()
        expected = []
        self.assertEqual(contents, expected)

        Base._Base__nb_objects = 0
        r1 = Square(10, 2, 8)
        Square.save_to_file([r1])
        contents = Square.load_from_file()
        expected = [r1]
        for i in range(len(contents)):
            self.assertEqual(contents[i].to_dictionary(),
                             expected[i].to_dictionary())

        Base._Base__nb_objects = 0
        r1 = Square(10, 2, 8)
        r2 = Square(2, 4)
        Square.save_to_file([r1, r2])
        contents = Square.load_from_file()
        expected = [r1, r2]
        for i in range(len(contents)):
            self.assertEqual(contents[i].to_dictionary(),
                             expected[i].to_dictionary())

        r1 = Square(20, 22, 89)
        r2 = Square(2, 4, 5)
        r3 = Square(2, 2)
        Square.save_to_file([r1, r2, r3])
        contents = Square.load_from_file()
        expected = [r1, r2, r3]
        for i in range(len(contents)):
            self.assertEqual(contents[i].to_dictionary(),
                             expected[i].to_dictionary())

if __name__ == "__main_":
    unittest.main()
