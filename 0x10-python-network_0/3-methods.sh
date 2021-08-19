#!/bin/bash
# curl for getting available methods
curl -s -X OPTIONS "$1" --trace-ascii /dev/stdout | grep "Allow:" | cut -d ":" -f 3-
