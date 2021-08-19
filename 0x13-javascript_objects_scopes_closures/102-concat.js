#!/usr/bin/node
const { argv } = require('process');

const fs = require('fs');
const full = fs.readFileSync(String(argv[2]), 'utf8');
const full2 = fs.readFileSync(String(argv[3]), 'utf8');
fs.writeFileSync(String(argv[4]), full);
fs.writeFileSync(String(argv[4]), full2, { flag: 'a+' });
