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

    def test_save_to_file(self):
        """Testing save_to_file()
        """

        o4_1 = Rectangle(10, 7, 2, 8)
        o4_2 = Rectangle(2, 4)
        o4_3 = Square(10, 7, 2)
        o4_4 = Square(8)

        rsave = Rectangle.save_to_file([o4_1, o4_2])
        ssave = Square.save_to_file([o4_3, o4_4])

        self.assertTrue(os.path.isfile('Rectangle.json'))
        self.assertTrue(os.path.isfile('Square.json'))

    def test_load_from_file(self):
        """Testing load_from_file()
        """

        o5_1 = Rectangle(10, 7, 2, 8)
        o5_2 = Rectangle(2, 4)
        o5_3 = Square(10, 7, 2)
        o5_4 = Square(8)

        rsave = Rectangle.save_to_file([o5_1, o5_2])
        ssave = Square.save_to_file([o5_3, o5_4])

        rlist = Rectangle.load_from_file()
        slist = Square.load_from_file()

        self.assertIsInstance(rlist[0], Rectangle)
        self.assertIsInstance(rlist[1], Rectangle)
        self.assertIsInstance(slist[0], Square)
        self.assertIsInstance(slist[1], Square)

        self.assertEqual(rlist[0].__str__(), '[Rectangle] (1) 2/8 - 10/7')
        self.assertEqual(rlist[1].__str__(), '[Rectangle] (2) 0/0 - 2/4')
        self.assertEqual(slist[0].__str__(), '[Square] (3) 7/2 - 10')
        self.assertEqual(slist[1].__str__(), '[Square] (4) 0/0 - 8')

if __name__ == "__main_":
    unittest.main()
