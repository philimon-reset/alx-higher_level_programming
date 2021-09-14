#!/usr/bin/node
const { writeFile } = require('fs');
const { argv } = require('process');
const request = require('request');

function MakeRequest (url) {
  return new Promise(function (resolve, reject) {
    request(url, (error, response, body) => {
      if (!error && response.statusCode === 200) {
        resolve(body);
      } else {
        reject(error);
      }
    });
  });
}

async function WriteOut () {
  const result = await (MakeRequest(argv[2]));
  writeFile(argv[3], result, 'utf-8', (err) => {
    if (err) {
      console.error(err);
    }
  });
}

WriteOut();