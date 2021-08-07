#!/usr/bin/python3
import sys
import MySQLdb

if __name__ == '__main__':
    conn = MySQLdb.connect(
        user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3])
    cur = conn.cursor()
    # HERE I have to know SQL to grab all states in my database
    user = sys.argv[4].strip("'")
    try:
        cur.execute(
            """SELECT * FROM states WHERE `name` = %(user)s ORDER BY
            states.id ASC""", {'user': user})
        conn.commit()
    except:
        conn.rollback()

    for row in cur.fetchall():
        print(row)
    cur.close()
    conn.close()
