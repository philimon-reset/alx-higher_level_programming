#!/usr/bin/python3
"""Start link class to table in database"""
import sys
from model_state import Base, State

from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]))
    Session = sessionmaker(bind=engine)
    s2 = Session()
    first = s2.query(State.id, State.name).order_by(State.id).first()
    if (first is None):
        print("Nothing")
    print("{}: {}".format(first.id, first.name))
    s2.close()
