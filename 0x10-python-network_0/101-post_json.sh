#!/bin/bash
# curl for checking response code
curl -w %{response_code} "$1"