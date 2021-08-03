#!/usr/bin/node
const indexer = require('./100-data.js').list;
const indexed = indexer.map(function (x, index) { return (x * index); });
console.log(`${indexer}`);
console.log(indexed);
