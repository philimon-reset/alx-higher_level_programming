#!/usr/bin/node
const { argv } = require('process');

function add(a, b) {
  let c = Number(a) + Number(b);
  console.log(c);
}
add(argv[2], argv[3]);
