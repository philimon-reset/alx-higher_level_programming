#!/usr/bin/python3
""" request the top ten hot posts """
import requests


def top_ten(subreddit):
    """ function to get top hot posts

    Args:
        subreddit (string): subreddit queried
    """
    web = 'https://www.reddit.com/r/{}/top.json?limit=10'.format(subreddit)
    headers = {'User-Agent': 'MyAPI/0.1'}
    main = requests.get(web,
                        headers=headers)
    try:
        for post in main.json()['data']['children']:
            print(post['data']['title'])
    except:
        return None
