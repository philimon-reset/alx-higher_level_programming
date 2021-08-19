#!/usr/bin/node
const { argv } = require('process');

if (isNaN(isNaN(argv[2])) || argv.length <= 3) {
  console.log(0);
} else {
  const num = [];
  argv.forEach(x => num.push(Number(x)));
  num.shift();
  num.shift();
  num.sort(function (a, b) {
    return b - a;
  });
  console.log(num[1]);
}
