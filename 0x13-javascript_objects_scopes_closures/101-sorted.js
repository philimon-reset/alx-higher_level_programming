#!/usr/bin/node
const dict = require('./101-data.js').dict;
const ND = {};
const Empty = Object.entries(dict);

for (let i = 0; i < Empty.length; i++) {
  ND[Empty[i][1]] = [];
}
for (const [key, value] of Object.entries(dict)) {
  if (key in ND[value]) {
    continue;
  } else {
    ND[value].push(key);
  }
}
console.log(ND);
