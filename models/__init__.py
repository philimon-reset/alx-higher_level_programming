#!/usr/bin/python3
"""
    instantiates the storage system, and defines
    dummy classes for further use
"""
from models.engine import file_storage
from models.base_model import BaseModel
from models.city import City
from models.review import Review
from models.state import State
from models.user import User
from models.place import Place
from models.amenity import Amenity

dummy_classes = {"BaseModel": BaseModel, "User": User,
                 "Review": Review, "City": City,
                 "State": State, "Place": Place,
                "Amenity": Amenity}

storage = file_storage.FileStorage()
storage.reload()
