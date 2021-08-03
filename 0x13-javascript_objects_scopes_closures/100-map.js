#!/usr/bin/node
const list = require('./100-data.js').list;
const indexed = list.map(function (x, index) { return (x * index); });
console.log(list);
console.log(indexed);
