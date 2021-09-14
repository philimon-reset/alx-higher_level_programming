#!/usr/bin/node
const request = require('request');
const { argv } = require('process');

request(argv[2], (error, response, body) => {
  if (error) {
    console.error(error);
  }
  console.log('code:', response && response.statusCode);
});
