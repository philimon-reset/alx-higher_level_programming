#!/usr/bin/node
const { argv } = require('process');

exports.add = function(a,b) {
  const c = Number(a) + Number(b);
  console.log(c);
}
