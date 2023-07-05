const repeatString = function (str, num) {
  if (num < 0) return "ERROR";

  let empty_str = "";

  for (let i = 0; i < num; i++) {
    empty_str += str;
  }
  return empty_str;
};

// Do not edit below this line
module.exports = repeatString;
