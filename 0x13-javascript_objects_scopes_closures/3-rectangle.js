#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if (w > 0 && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    const rip = 'X'.repeat(this.width);
    for (let i = 0; i < this.height; i++) {
      console.log(rip);
    }
  }
}

module.exports = Rectangle;
