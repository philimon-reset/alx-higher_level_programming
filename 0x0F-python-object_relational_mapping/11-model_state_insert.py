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

    user = sys.argv[4].split("'")
    Session = sessionmaker(bind=engine)
    s2 = Session()
    content = s2.query(State).order_by(
        State.id).filter(State.name == user).all()
    print(content)
    for i in content:
        if (i is not None):
            print(i.id)
    if (len(content) == 0):
        print("Not found")
s2.close()
