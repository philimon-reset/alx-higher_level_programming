#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    name = dir(hidden_4)
    for i in name:
        if name[i][0] != "__":
            print(name[i])
