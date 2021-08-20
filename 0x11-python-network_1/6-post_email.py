#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
import requests
from sys import argv

with requests.get(argv[1]) as response:
    r = response.post('https://httpbin.org/post', data = {'email':argv[2]})
    html = requests.text
    print(html)
