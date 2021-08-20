#!/usr/bin/python3
"""displays the value of the X-Request-Id variable"""
if __name__ == '__main__':
    from urllib import request
    from sys import argv
    with request.urlopen(argv[1]) as response:
        print(dict(response.info()).get("X-Request-Id"))
