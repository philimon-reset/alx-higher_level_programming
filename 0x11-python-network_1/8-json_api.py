#!/usr/bin/python3
""" sends a POST request to http://0.0.0.0:5000/search_user"""
import requests
from sys import argv

try:
        my_obj = {'q':argv[1]}
except:
        my_obj = {'q': ""}
r = requests.post("http://0.0.0.0:5000/search_user", data = my_obj)
if len(r.json()) == 0:
        print("No result")
else:
        html = r.json()
        print("[{}] {}".format(html["id"], html["name"]))
