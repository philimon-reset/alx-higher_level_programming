#!/usr/bin/python3
import unittest
import io
import sys
from models.rectangle import Rectangle
from models.base import Base


class TestRectCls(unittest.TestCase):
    def test_init(self):
        Base._Base__nb_objects = 0
        x = Rectangle(10, 10)
        y = Rectangle(10, 10)
        self.assertEqual(x.id, 1)
        self.assertEqual(y.id, 2)

    def test_attrs(self):
        Base._Base__nb_objects = 0
        x = Rectangle(10, 10, 10, 10, 15)
        self.assertEqual(x.width, 10)
        self.assertEqual(x.height, 10)
        self.assertEqual(x.x, 10)
        self.assertEqual(x.y, 10)
        self.assertEqual(x.id, 15)

    def test_attrs_validation(self):
        Base._Base__nb_objects = 0
        with self.assertRaisesRegex(TypeError, "width must be an integer"):
            Rectangle("20", 20)
        with self.assertRaisesRegex(TypeError, "height must be an integer"):
            Rectangle(20, "20")
        with self.assertRaisesRegex(TypeError, "x must be an integer"):
            Rectangle(20, 20, "x", 10)
        with self.assertRaisesRegex(TypeError, "y must be an integer"):
            Rectangle(20, 20, 10, "y")
        with self.assertRaises(TypeError):
            Rectangle(float("NaN"), float("inf"))
            Rectangle(float("inf"), float("NaN"))
            Rectangle(float("NaN"), float("NaN"), float("NaN"), float("NaN"))
            Rectangle(float("inf"), float("inf"), float("inf"), float("inf"))
            Rectangle(None, None)
            Rectangle()
            Rectangle([10, 10], [10, 10], [10, 10], [10, 10])
            Rectangle("abebe", "abebe", "abebe", "abebe")
        with self.assertRaisesRegex(ValueError, "width must be > 0"):
            Rectangle(-20, 20)
            Rectangle(0, 20)
            Rectangle(-20000000, 20)
        with self.assertRaisesRegex(ValueError, "height must be > 0"):
            Rectangle(20, -20)
            Rectangle(20, 0)
            Rectangle(20, -20000000)
        with self.assertRaisesRegex(ValueError, "x must be >= 0"):
            Rectangle(10, 10, -10)
            Rectangle(10, 10, -100000)
        with self.assertRaisesRegex(ValueError, "y must be >= 0"):
            Rectangle(10, 10, 10, -10)
            Rectangle(10, 10, 10, -100000)

    def test_area(self):
        Base._Base__nb_objects = 0
        x = Rectangle(10, 10)
        self.assertEqual(x.area(), 100)
        x = Rectangle(1, 1234)
        self.assertEqual(x.area(), 1234)
        x = Rectangle(1345, 1)
        self.assertEqual(x.area(), 1345)

    def test_display(self):
        Base._Base__nb_objects = 0

        captured_print = io.StringIO()
        sys.stdout = captured_print

        x = Rectangle(2, 2, 2, 2)
        x.display()
        self.assertEqual(captured_print.getvalue(), "\n\n  ##\n  ##\n")
        captured_print.seek(0)
        captured_print.truncate(0)

        x = Rectangle(1, 1)
        x.display()
        self.assertEqual(captured_print.getvalue(), "#\n")
        captured_print.seek(0)
        captured_print.truncate(0)

        x = Rectangle(1, 1)
        x.display()
        self.assertEqual(captured_print.getvalue(), "#\n")
        captured_print.seek(0)
        captured_print.truncate(0)

        x = Rectangle(1, 1, 2, 2)
        x.display()
        self.assertEqual(captured_print.getvalue(), "\n\n  #\n")
        captured_print.seek(0)
        captured_print.truncate(0)

        sys.stdout = sys.__stdout__

if __name__ == "__main__":
    unittest.main()
