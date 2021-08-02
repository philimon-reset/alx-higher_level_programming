#!/usr/bin/node
const { argv } = require('process');

argv.forEach((val, index) => {
  console.log(`${index}: ${val}`);
});
