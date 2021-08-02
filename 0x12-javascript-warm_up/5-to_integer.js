#!/usr/bin/node
const { argv } = require('process');

if (Number(argv[2]) === 0) {
  console.log('Not a number');
} else {
  console.log(Number(argv[2]));
}
