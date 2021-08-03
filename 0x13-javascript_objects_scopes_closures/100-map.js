#!/usr/bin/node
list = require('./100-data.js').list;
console.log(list);
const indexed = list.map(function (x, index) { return (x * index); });
console.log(indexed);
