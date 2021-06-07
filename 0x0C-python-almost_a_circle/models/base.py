#!/usr/bin/python3
""" main base class """


class Base():
    """ start of base class """
    __nb_objects = 0

    def __init__(self, id=None):
        """ init """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """ convert list rep of json file to string rep """
        temp = []
        if list_dictionaries is None or len(list_dictionaries) == 0:
            return str(temp)
        temp = json.dumps(list_dictionaries)
        return temp

    @staticmethod
    def from_json_string(json_string):
        """ convert string rep of json file to list rep """
        temp = []
        if json_string is None or len(json_string) == 0:
            return temp
        return json.loads(json_string)

    @classmethod
    def save_to_file(cls, list_objs):
        """ save string rep of rep file to new file """
        temp = []
        if list_objs is None or len(list_objs) == 0:
            with open(cls.__name__ + ".json", 'w', encoding='utf8') as json_file:
                json_file.write(temp)
        for v in list_objs:
            temp.append(v.to_dictionary())
        temp = cls.to_json_string(temp)
        with open(cls.__name__ + ".json", 'w', encoding='utf8') as json_file:
            json_file.write(temp)

    @classmethod
    def create(cls, **dictionary):
        """ create dummy instances to fill in and update """
        if cls.__name__ == 'Rectangle':
            temp = cls(1, 1)
        elif cls.__name__ == 'Square':
            temp = cls(1)
        temp.update(**dictionary)
        return temp

if __name__ == "__main__":

    b1 = Base()
    print(b1.id)

    b2 = Base()
    print(b2.id)

    b3 = Base()
    print(b3.id)

    b4 = Base(12)
    print(b4.id)

    b5 = Base()
    print(b5.id)
