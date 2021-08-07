#!/usr/bin/python3
import sys
import MySQLdb

conn = MySQLdb.connect(host="localhost", port=3306,
                       user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
cur = conn.cursor()
# HERE I have to know SQL to grab all states in my database
try:
    cur.execute(
        """SELECT * FROM states WHERE `name` = {} ORDER BY states.id ASC""".format(sys.argv[4]))
    conn.commit()
except:
    conn.rollback()

for row in cur.fetchall():
    print(row)
cur.close()
conn.close()
