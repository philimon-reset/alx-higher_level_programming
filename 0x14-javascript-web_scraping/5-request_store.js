#!/usr/bin/node
const request = require('request');
const { argv } = require('process');
const { writeFile } = require('fs');

request(argv[2], (error, response, body) => {
  if (error) {
    console.error(error);
  }
  writeFile(argv[3], body, 'utf-8', err => {
    if (err) {
      console.log(err);
    }
  });
});
