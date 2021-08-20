#!/usr/bin/python3
"""Please list 10 commits"""
import requests
from sys import argv

if __name__ == '__main__':
    req = requests.get(
        "https://api.github.com/repos/{}/{}/commits".format(argv[2], argv[1]))
    html = req.json()
    for i in range(10):
        print("{}: {}".format(html[i].get("sha"),
              html[i].get("commit").get("committer").get("name")))
