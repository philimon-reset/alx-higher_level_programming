#!/usr/bin/node
const request = require('request');
const { argv } = require('process');

request(argv[2], (error, response, body) => {
  if (error) {
    console.error(error);
  }
  const final = {};
  console.log(JSON.parse(body).forEach(file => {
    if (file.completed) {
      const id = file.userId;
      if (final[id] !== undefined) {
        final[id]++;
      } else {
        final[id] = 1;
      }
    }
  }));
  console.log(final);
});
