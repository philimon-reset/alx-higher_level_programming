#!/usr/bin/python3
"""Please list 10 commits"""
import requests
from sys import argv

if __name__ == '__main__':
    limit = {"per_page": 10}
    req = requests.get(
        "https://api.github.com/repos/{}/{}/commits".format(argv[2], argv[1]),
        params=limit)
    html = req.json()
    for i in html:
        print("{}: {}".format(i.get("sha"),
              i.get("commit").get("author").get("name")))
