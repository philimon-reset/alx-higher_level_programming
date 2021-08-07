#!/usr/bin/python3
import MySQLdb

db = MySQLdb.connect("localhost", "3306", "Sisbro@2018", "hbtn_0e_0_usa")

cursor = db.cursor()

# Prepare SQL query to INSERT a record into the database.
sql = """SELECT * FROM states ORDER BY id"""
try:
    # Execute the SQL command
    cursor.execute(sql)
    cursor.execute("DELETE FROM EMPLOYEE WHERE FIRST_NAME = 'Mac'")
# Commit your changes in the database
    db.commit()
except:
    # Rollback in case there is any error
    db.rollback()
cursor.execute("SELECT * FROM EMPLOYEE")

data = cursor.fetchall()
print(data)
db.close()
