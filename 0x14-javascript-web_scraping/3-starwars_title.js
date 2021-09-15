#!/usr/bin/node
const request = require('request');
const { argv } = require('process');
const url = "https://swapi-api.hbtn.io/api/films/";

request(url + argv[2], (error, response, body) => {
	if (error) {
		console.error(error)
	}
	console.log(JSON.parse(body).title);

})