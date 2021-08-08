#!/usr/bin/python3
"""Start link class to table in database
"""
import sys
from relationship_state import Base, State
from relationship_city import City
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]))
    Session = sessionmaker(bind=engine)
    s2 = Session()
    for i in s2.query(State):
        print("{}: {}".format(i.id, i.name))
        for j in i.cities:
            print("\t{}: {}".format(j.id, j.name))
    s2.commit()
    s2.close()
