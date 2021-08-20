#!/usr/bin/python3
"""fetche https://intranet.hbtn.io/status"""
from urllib import request

with request.urlopen("https://intranet.hbtn.io/status") as response:
        html = response.read()
        print("Body response:")
        print("\t- type: {}".format(type(html)))
        print("\t- content: {}".format(html))
        html = html.decode("UTF-8")
        print("\t- utf8 content: {}".format(html))