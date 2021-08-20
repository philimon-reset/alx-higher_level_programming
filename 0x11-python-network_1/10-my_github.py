#!/usr/bin/python3
"""Python script that takes your GitHub credentials to display your id"""
import requests
from sys import argv

if __name__ == '__main__':
        req = requests.get("https://github.com", auth=(argv[1], argv[2]))
        print(req.json())

