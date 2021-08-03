#!/usr/bin/node
const ASquare = require('./5-square.js');
class Square extends ASquare {
  charPrint (c) {
    if (c !== undefined) {
      const rip = 'C'.repeat(this.width);
      for (let i = 0; i < this.height; i++) {
        console.log(rip);
      }
    } else {
      super.print();
    }
  }
}
module.exports = Square;
