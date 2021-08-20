#!/usr/bin/python3
"""Please list 10 commits"""
import requests
from sys import argv

if __name__ == '__main__':
    req = requests.get("https://api.github.com/repos/{}/{}".format(argv[2], argv[1]))
    html = req.json()
    response = requests.get(html["commits_url"])
    html2 = response.json()
    print(html)