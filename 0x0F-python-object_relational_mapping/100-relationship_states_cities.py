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
    Base.metadata.create_all(engine)
    Session = sessionmaker(bind=engine)
    s2 = Session()
    content = City(name='San Francisco', state=State(name='California'))
    s2.add(content)
    s2.commit()
    s2.close()
