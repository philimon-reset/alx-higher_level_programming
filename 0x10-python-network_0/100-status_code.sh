#!/bin/bash
# curl for checking response code
curl -s -w %{response_code} --output /dev/null "$1"