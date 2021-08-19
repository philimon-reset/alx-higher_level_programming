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
        """SELECT cities.id, cities.name, states.name
    FROM cities
    JOIN states
    ON states.id = cities.state_id
    ORDER BY cities.id ASC""")

    for row in cur.fetchall():
        print(row)
    cur.close()
    conn.close()
