#!/usr/bin/node
const indexer = require('./100-data.js').list;
console.log(indexer);
const indexed = indexer.map(function (x, index) { return (x * index); });
console.log(indexed);
