#!/bin/bash
# curl for getting available methods
curl -s -v -X OPTIONS "$1" --trace-ascii /dev/stdout | grep "Allow:"
