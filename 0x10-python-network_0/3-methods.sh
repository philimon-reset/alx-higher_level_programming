#!/bin/bash
# curl for getting available methods
curl -s -i -X OPTIONS "$1" 2>&1 | grep "Allow" | cut -d " " -f 2-
