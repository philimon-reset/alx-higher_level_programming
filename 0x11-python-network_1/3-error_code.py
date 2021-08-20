#!/usr/bin/python3
"""takes in a URL and an email, sends a POST request to the passed URL"""
from urllib import request
from urllib.error import HTTPError
from sys import argv

with request.urlopen(argv[1s]) as response:
        test = response.read().decode('UTF-8')
        print(test)