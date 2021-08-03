#!/usr/bin/node
exports.logMe = function (item) {
  if (typeof (this.counter) === 'undefined') {
    this.counter = 0;
  }
  console.log(this.counter + ': ' + item);
  this.counter++;
};
