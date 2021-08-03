#!/usr/bin/node
exports.converter = function (base) {
  return function (y) {
    return (y.toString(base));
  };
};
