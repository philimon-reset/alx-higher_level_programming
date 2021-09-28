#!/usr/bin/python3
""" returns a list containing the titles of all hot articles """
import requests


def recurse(subreddit, hot_list=[]):
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
