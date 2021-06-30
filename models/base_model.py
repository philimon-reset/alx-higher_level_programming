#!/usr/bin/python3
"""
    Module containing BaseModel
"""
from uuid import uuid4
from datetime import datetime
import models


class BaseModel():
    """
        Base class to define all common attributes and methods for
        other classes
    """

    def __init__(self, *args, **kwargs):
        """
            initialization
        """
        if kwargs:
            for key in kwargs:
                if key == "__class__":
                    continue
                elif key in ("created_at", "updated_at"):
                    iso = "%Y-%m-%dT%H:%M:%S.%f"
                    setattr(self, key, datetime.strptime(kwargs[key], iso))
                else:
                    setattr(self, key, kwargs[key])
        else:
            self.id = str(uuid4())
            self.created_at = self.updated_at = datetime.now()
            models.storage.new(self)

    def __str__(self):
        """
            return string representation of a Model
        """
        return "[{}] ({}) {}".format(self.__class__.__name__,
                                     self.id, self.__dict__)

    def save(self):
        """
            update latest updation time of a model
        """
        self.updated_at = datetime.now()
        models.storage.save()

    def to_dict(self):
        """
            custom representation of a model
        """
        custom_dict = {}
        custom_dict.update({"__class__": self.__class__.__name__})
        for key in self.__dict__:
            if key in ("created_at", "updated_at"):
                custom_dict.update({key: getattr(self, key).isoformat()})
            else:
                custom_dict.update({key: getattr(self, key)})
        return custom_dict
