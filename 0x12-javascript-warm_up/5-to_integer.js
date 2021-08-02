#!/usr/bin/node
const { argv } = require('process');

if (Number(argv[2]) !== NaN) {
  console.log('Not a number');
} else {
  console.log(Number(argv[2]));
}
