#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
if __name__ == '__main__':
    import requests
    from sys import argv
    with requests.get(argv[1]) as response:
        html = response.headers
        print(html["X-Request-Id"])
