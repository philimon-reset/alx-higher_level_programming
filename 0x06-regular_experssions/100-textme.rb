#!/usr/bin/env ruby
puts ARGV[0].scan(/(flags|from|to):(-?\d:-?\d:-?\d:-?\d:-?\d|\+?\w+|\+?\w+)/).join(",")
