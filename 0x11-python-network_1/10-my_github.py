#!/usr/bin/python3
"""Python script that takes your GitHub credentials to display your id"""
import requests
from sys import argv

if __name__ == '__main__':
    try:
        req = requests.get("https://api.github.com/user",
                           auth=(argv[1], argv[2]))
        html = req.json()
        print(html["id"])
    except:
        print(None)
