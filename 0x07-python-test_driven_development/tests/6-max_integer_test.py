#!/usr/bin/python3
import unittest
max_integer = __import__('M-max_integer').max_integer

class TestMaxInteger(unittest.Testcase):
	""" test class
	"""
	def test_max(self):
		"""
		test correct output"""
		self.assertAlmostEqual(max_integer([1,2,3,5,7,1], 7))
		self.assertAlmostEqual(max_integer([2], 2))
		self.assertAlmostEqual(max_integer([], None))
		self.assertAlmostEqual(max_integer(["h", "e", "l", "l"], "l"))
		self.assertAlmostEqual(max_integer("hello", "h"))

if __name__ == "__main__":
    unittest.main()
