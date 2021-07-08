var temp = "It is a good day.";
var count = (temp.match(/a/g) || []).length;
console.log(count);