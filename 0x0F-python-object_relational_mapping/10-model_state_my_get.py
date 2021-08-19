#!/usr/bin/python3
"""Start link class to table in database
"""
import sys
from model_state import Base, State

from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]))

    user = sys.argv[4]
    Session = sessionmaker(bind=engine)
    s2 = Session()
    content = s2.query(State).order_by(
        State.id).filter(State.name == user)
    if (len(content.all()) == 0):
        print("Not found")
    else:
        print(content[0].id)
    s2.close()
