#!/bin/bash
# curl for size
curl -s -w "You got me!" --output /dev/null "0.0.0.0:5000/catch_me"
