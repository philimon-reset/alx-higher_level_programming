#!/bin/bash
# curl for size
curl -i -s "$1" | grep "Content-Length:" | cut -d ":" -f 2