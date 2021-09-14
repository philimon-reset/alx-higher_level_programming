#!/usr/bin/node
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

async function main () {
  let todos = await MakeRequest(argv[2]);
  todos = JSON.parse(todos);
  const result = {};
  todos.forEach(element => {
    if (element.completed) {
      const key = element.userId;
      if (result[key] !== undefined) {
        result[key]++;
      } else {
        result[key] = 1;
      }
    }
  });
  console.log(result);
}

main();
