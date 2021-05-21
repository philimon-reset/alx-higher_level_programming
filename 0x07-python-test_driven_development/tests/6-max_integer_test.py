#!/usr/bin/python3
import unitest
from M-max_integer import max_integer

class TestMax(unittest.testcase):
	""" test class
	"""
	def test_max(self):
		"""
		test correct output"""
		self.assertAlmostEqual(max_integer([1,2,3,5,7,1], 7))
		self.assertAlmostEqual(max_integer([], None))
		self.assertAlmostEqual(max_integer("hello", "h"))
		
