#!/bin/bash
# curl for getting available methods
curl -s -X OPTIONS "$1" -o /dev/stdout | grep "Allow:" | cut -d ":" -f 3-
