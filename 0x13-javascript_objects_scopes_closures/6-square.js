#!/usr/bin/node
let Square = require('./5-square.js');
class Square extends Square {
  constructor (size) {
    super(size, size);
    this.size = size;
  }

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


