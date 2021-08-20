#!/usr/bin/python3
"""fetche https://intranet.hbtn.io/status"""
import requests

with requests.get("https://intranet.hbtn.io/status", auth=('user', 'pass')) as response:
    html = response.content()
    print(html)
#     print("Body response:")
#     print("\t- type: {}".format(type(html)))
#     print("\t- content: {}".format(html))
#     html = html.decode("UTF-8")
#     print("\t- utf8 content: {}".format(html))
