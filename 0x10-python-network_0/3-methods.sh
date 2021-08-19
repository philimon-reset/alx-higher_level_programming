#!/bin/bash
# curl for getting available methods
curl -s -i -X OPTIONS google.com | grep "Allow:" | cut -d ":" -f 2