#!/usr/bin/node
const { argv } = require('process');

if (argv[2] === undefined) {
        console.log('Missing size');
} else {
        let rip = "X".repeat(argv[2])
        for (let i = 0; i < argv[2]; i++) {
                console.log(rip);
        }
}
