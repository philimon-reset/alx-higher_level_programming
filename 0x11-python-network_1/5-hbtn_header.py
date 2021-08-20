#!/usr/bin/python3
"""displays the value of the variable X-Request-Id"""
if __name__ == '__main__':
    import requests
    from sys import argv
    response = requests.get(argv[1])
    html = response.headers
    print(html["X-Request-Id"])
