#!/usr/bin/python3
"""takes in a URL and an email, sends a POST request to the passed URL"""
from urllib import request
from urllib import parse
from sys import argv

value = {'email':argv[2]}
data = parse.urlencode(value)
data = data.encode('ascii')
req = request.Request(argv[1], data)
with request.urlopen(req) as response:
        test = response.read().decode('UTF-8')
        print(test)
