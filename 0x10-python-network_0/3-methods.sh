#!/bin/bash
# curl for getting available methods
curl -s -X OPTIONS "$1" -o /dev/stdout
