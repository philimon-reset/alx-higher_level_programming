#!/usr/bin/python3
"""displays the value of the X-Request-Id variable"""
from urllib import request
from sys import argv

with request.urlopen(argv[1]) as response:
    print(dict(response.info()).get("X-Request-Id"))
