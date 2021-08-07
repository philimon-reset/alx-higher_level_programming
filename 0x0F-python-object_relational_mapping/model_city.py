#!/usr/bin/python3
"""Start link class to table in database
"""
import sys
from sqlalchemy import (create_engine), Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]), pool_pre_ping=True)
    Base = declarative_base()

    class State(Base):
        __tablename__ = 'states'
        id = Column(Integer, Sequence('user_id_seq'), primary_key=True)
        name = Column(String(128))

        def __repr__(self):
            return "<User(name='%s', fullname='%s', nickname='%s')>" % (
                self.name)
    Base.metadata.create_all(engine)
