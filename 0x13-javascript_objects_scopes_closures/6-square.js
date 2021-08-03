#!/usr/bin/node

const Rectangle = require('./4-rectangle');

class Square extends Rectangle {
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