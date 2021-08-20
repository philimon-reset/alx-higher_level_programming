#!/usr/bin/python3
"""displays the body of the response."""
import requests

with requests.get("https://intranet.hbtn.io/status", auth=('user', 'pass')) as response:
        if response.status_code >= 400:
                print("Error code: {}".format(response.status_code))
        else:
                html = response.text
                print(html)