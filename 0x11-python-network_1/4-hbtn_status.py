#!/usr/bin/python3
"""fetche https://intranet.hbtn.io/status"""
import requests

with requests.get("https://intranet.hbtn.io/status", auth=('user', 'pass')) as response:
    html = response.text
    print("Body response:")
    print("\t- type: {}".format(type(html)))
    print("\t- content: {}".format(html))