#!/usr/bin/python3
"""
    tests for BaseModel
"""
import unittest
from datetime import datetime
import time
import re

from models.base_model import BaseModel


class Test_BaseModel(unittest.TestCase):
    """
        Base test class
    """
    def test_id(self):
        """
            test id is a valid UUID
        """
        dummy = BaseModel()
        is_match = re.fullmatch(r"\w{8}-\w{4}-\w{4}-\w{4}-\w{12}", dummy.id)
        self.assertTrue(is_match)

    def test_unique_id(self):
        """
            test unique ID's
        """
        dummy_1 = BaseModel()
        dummy_2 = BaseModel()
        self.assertNotEqual(dummy_1.id, dummy_2.id)

    def test_creation_time(self):
        """
            test initial creation time and updation time
        """
        self.assertEqual(BaseModel().created_at, datetime.now())
        self.assertEqual(BaseModel().updated_at, datetime.now())
        dummy = BaseModel()
        self.assertEqual(dummy.updated_at, dummy.created_at)

    def test_str(self):
        """
            test string representation of an object
        """
        dummy = BaseModel()
        correct = "[{}] ({}) {}".format("BaseModel", dummy.id, dummy.__dict__)
        self.assertEqual(str(dummy), correct)

    def test_save(self):
        """
            test updation time after updating
        """
        dummy = BaseModel()
        time.sleep(1)
        dummy.save()
        self.assertGreater(dummy.updated_at, dummy.created_at)

    def test_dict(self):
        """
            test dictionary representation of a model
        """
        dummy = BaseModel()
        test_dict = dummy.to_dict()
        self.assertTrue("__class__" in test_dict)
        self.assertIsInstance(test_dict["__class__"], str)
        self.assertTrue("id" in test_dict)
        self.assertIsInstance(test_dict["id"], str)
        self.assertTrue("created_at" in test_dict)
        self.assertIsInstance(test_dict["created_at"], str)
        self.assertTrue("updated_at" in test_dict)
        self.assertIsInstance(test_dict["updated_at"], str)
        dummy.test = 10
        test_dict = dummy.to_dict()
        self.assertTrue("test" in test_dict)


if __name__ == "__main__":
        unittest.main()