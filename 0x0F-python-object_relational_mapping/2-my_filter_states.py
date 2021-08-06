#!/usr/bin/python3
import sys
import MySQLdb

conn = MySQLdb.connect(host="localhost", port=3306,
                       user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
cur = conn.cursor()
# HERE I have to know SQL to grab all states in my database
cur.execute(
    f"SELECT * FROM states WHERE REGEXP_LIKE(`name`, {sys.argv[4]}, 'c') = 1 ORDER BY states.id ASC")

for row in cur.fetchall():
    print(row)
cur.close()
conn.close()
