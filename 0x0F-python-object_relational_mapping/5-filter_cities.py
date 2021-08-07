#!/usr/bin/python3
import sys
import MySQLdb

conn = MySQLdb.connect(user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3])
cur = conn.cursor()
# HERE I have to know SQL to grab all states in my database
user = sys.argv[4].strip("'")
try:
    cur.execute(
        """SELECT cities.name
        FROM cities
        WHERE cities.state_id in (SELECT states.id
        FROM states
        WHERE states.name = '{}')
        ORDER BY cities.id ASC""".format(user))
    conn.commit()
except:
    conn.rollback()
data = cur.fetchall()
final = []
for i in data:
    j = [final.append(x) for x in i]
print(", ".join(final))

cur.close()
conn.close()
