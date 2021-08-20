#!/usr/bin/python3
"""displays the body of the response."""
import requests

with requests.get(argv[1]) as response:
        if response.status_code >= 400:
                print("Error code: {}".format(response.status_code))
        else:
                html = response.text
                print(html)