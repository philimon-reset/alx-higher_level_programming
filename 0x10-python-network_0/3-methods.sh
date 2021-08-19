#!/bin/bash
# curl for getting available methods
curl -s -v -X OPTIONS "$1" | grep "Allow:" | cut -d ":" -f 2-
