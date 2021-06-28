#!/usr/bin/python3
from models.engine import file_storage
from models.base_model import BaseModel

dummy_classes = {"BaseModel": BaseModel}

storage = file_storage.FileStorage()
storage.reload()
