#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
import requests
from sys import argv

with requests.get(argv[1], auth=('user', 'pass')) as response:
    html = response.POST('https://httpbin.org/post', data = {'email':argv[2]})
    print(response.text)
