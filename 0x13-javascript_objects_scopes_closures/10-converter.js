#!/usr/bin/node
const { argv } = require('process');

function Fact (num) {
  if (isNaN(num) || num === 0) {
    return (1);
  }
  return (num * Fact(num - 1));
}

console.log(Fact(Number(argv[2])));
