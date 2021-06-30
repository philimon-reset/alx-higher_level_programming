from models.engine import file_storage
from models.base_model import BaseModel
from models.engine.file_storage import FileStorage

dummy_ins = {"BaseModel": BaseModel, "FileStorage": FileStorage}

storage = file_storage.FileStorage()
storage.reload()
