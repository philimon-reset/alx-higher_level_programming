#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
import requests
from sys import argv

r = requests.post(argv[1], data = {'email':argv[2]})
print(r.text)
