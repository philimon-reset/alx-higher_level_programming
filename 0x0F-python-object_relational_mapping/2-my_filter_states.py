#!/usr/bin/python3
import sys
import MySQLdb

conn = MySQLdb.connect(host="localhost", port=3306,
                       user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
cur = conn.cursor()
# HERE I have to know SQL to grab all states in my database
try:
    tryed = sys.argv[4]
    cur.execute(
        """SELECT * FROM states WHERE REGEXP_LIKE(`name`, tryed, 'c') = 1 ORDER BY states.id ASC""")

    conn.commit()
except:
    conn.rollback()

query_rows = cur.fetchall()
for row in query_rows:
    print(row)
cur.close()
conn.close()
