#!/usr/bin/python3

if __name__ == '__main__':
    import sys
    import MySQLdb
    conn = MySQLdb.connect(
        user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3])
    cur = conn.cursor()
    # HERE I have to know SQL to grab all states in my database
    try:
        cur.execute("SELECT * FROM states ORDER BY id ASC")
        conn.commit()
    except:
        conn.rollback()
    query_rows = cur.fetchall()
    for row in query_rows:
        print(row)
    cur.close()
    conn.close()
