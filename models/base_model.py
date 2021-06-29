from datetime import datetime
import uuid
import models


class BaseModel():
    def __init__(self, *args, **kwargs):
        time = ["created_at", "updated_at", "__class__"]
        if kwargs:
            for i in kwargs.keys():
                if i not in time:
                    setattr(self, i, kwargs[i])
                elif i != '__class__':
                    setattr(self, i, datetime.fromisoformat(kwargs[i]))
        else:
            self.id = str(uuid.uuid4())
            self.created_at = datetime.now()
            self.updated_at = datetime.now()
            models.storage.new(self)

    def __str__(self):
        return "[{}] ({}) {}".format(self.__class__.__name__, self.id, self.__dict__)

    def save(self):
        self.updated_at = datetime.now()
        models.storage.save()

    def to_dict(self):
        time = ["created_at", "updated_at"]
        temp = {"__class__": self.__class__.__name__}
        for i in self.__dict__.keys():
            if i not in time:
                temp[i] = self.__dict__[i]
            else:
                temp[i] = self.__dict__[i].isoformat()
        return temp


if "__main__" == __name__:

    my_model = BaseModel()
    my_model.name = "Holberton"
    my_model.my_number = 89
    print(my_model.id)
    print(my_model)
    print(type(my_model.created_at))
    print("--")
    my_model_json = my_model.to_dict()
    print(my_model_json)
    print("JSON of my_model:")
    for key in my_model_json.keys():
        print("\t{}: ({}) - {}".format(key,
                                       type(my_model_json[key]), my_model_json[key]))

    print("--")
    my_new_model = BaseModel(**my_model_json)
    print(my_new_model.id)
    print(my_new_model)
    print(type(my_new_model.created_at))

    print("--")
    print(my_model is my_new_model)
