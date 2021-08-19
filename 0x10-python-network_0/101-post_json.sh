#!/bin/bash
# curl for checking json
curl -s "$1" -X POST -H "Content-Type: application/json" -d @"$2"