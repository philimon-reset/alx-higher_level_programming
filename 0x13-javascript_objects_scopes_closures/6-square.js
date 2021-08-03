#!/usr/bin/node
const ASquare = require('./5-square.js');
class Square extends ASquare {
  charPrint (c) {
    if (c === undefined) {
      c = 'X';
    }
    const rip = c.repeat(this.width);
    for (let i = 0; i < this.height; i++) {
      console.log(rip);
    }
  }
}
module.exports = Square;
