#!/usr/bin/python3
"""main file"""
if __name__ == '__main__':
    import sys
    import MySQLdb
    conn = MySQLdb.connect(
        user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3])
    cur = conn.cursor()
    # HERE I have to know SQL to grab all states in my database
    cur.execute(
        """SELECT * FROM states WHERE BINARY `name` = "{}" ORDER BY
        states.id ASC""".format(sys.argv[4].strip("'")))

    for row in cur.fetchall():
        print(row)
    cur.close()
    conn.close()
