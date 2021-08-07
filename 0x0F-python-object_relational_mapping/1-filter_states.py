#!/usr/bin/python3
import sys
import MySQLdb

if __name__ == '__main__':
    conn = MySQLdb.connect(
        user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3])
    cur = conn.cursor()
    # HERE I have to know SQL to grab all states in my database
    try:
        cur.execute(
            """SELECT * FROM states WHERE REGEXP_LIKE(`name`, '^N', 'c') = 1
            ORDER BY states.id ASC""")

        conn.commit()
    except:
        conn.rollback()

    query_rows = cur.fetchall()
    for row in query_rows:
        print(row)
    cur.close()
    conn.close()
