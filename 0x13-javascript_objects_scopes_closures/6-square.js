#!/usr/bin/node
const ASquare = require('./5-square.js');
class Square extends ASquare {
  charPrint (c) {
    if (c !== undefined) {
      const rip = 'C'.repeat(this.size);
      for (let i = 0; i < this.size; i++) {
        console.log(rip);
      }
    } else {
      super.print();
    }
  }
}

const s1 = new Square(4);
s1.charPrint();

s1.charPrint('C');
