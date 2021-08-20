#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
import requests

with requests.get("https://intranet.hbtn.io/status", auth=('user', 'pass')) as response:
    html = response.headers
    print(html["X-Request-Id"])