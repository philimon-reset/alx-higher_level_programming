#!/usr/bin/node
const { argv } = require('process');

try {
  console.log(argv[3]);
}
catch (err) {
  console.log('No argument');
}
