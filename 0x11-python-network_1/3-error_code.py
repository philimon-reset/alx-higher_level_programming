#!/usr/bin/python3
"""takes in a URL and an email, sends a POST request to the passed URL"""
from urllib import request
from urllib.error import HTTPError
from sys import argv

try:
        with request.urlopen(argv[1]) as response:
                test = response.read().decode('UTF-8')
                print(test)
except HTTPError as e:
        status = e.status_code
        print("Error code: {}".format(status))