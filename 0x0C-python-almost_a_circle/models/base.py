class Base():
    __nb_objects = 0

    def __init__(self, id=None):
        if id != None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        temp = json.dumps(list_dictionaries[0])
        if temp == None or len(temp) == 0:
            return temp
        return temp

    @classmethod
    def save_to_file(cls, list_objs):
        temp = []
        for v in list_objs:
            temp.append(v.to_dictionary())
        with open(cls.__name__ + ".json", 'w', encoding='utf8') as json_file:
            json.dump(temp, json_file, allow_nan=False)


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
