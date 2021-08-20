#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
import requests
from sys import argv

data = {'email':argv[2]}
with requests.get(argv[1], auth=('user', 'pass'), params=data) as response:
        html = response.text
        print(html)
