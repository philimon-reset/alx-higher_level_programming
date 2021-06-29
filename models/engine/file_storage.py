import json
import models


class FileStorage:
    __file_path = "file.json"
    __objects = {}

    def all(self):
        return self.__objects

    def new(self, obj):
        key = "{}.{}".format(type(obj).__name__, obj.id)
        self.__objects[key] = obj

    def save(self):
        """ save string rep of rep file to new file """
        for i, o in self.__objects.items():
            self.__objects[i] = o.to_dict()
        with open(self.__file_path, 'w', encoding='utf8') as mfile:
            json.dump(self.__objects, mfile)

    def reload(self):
        try:
            with open(self.__file_path, 'r', encoding='utf8') as mfile:
                a = json.load(mfile)
            for i, di in a.items():
                temp_ins = models.dummy_ins[di["__class__"]](**di)
                self.__objects[i] = temp_ins
        except:
            pass
