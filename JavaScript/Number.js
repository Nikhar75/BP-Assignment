
let number = [
    98,6,48,1,25,66,31,86,11,73
];

number.sort();
console.log(number);

number.sort((a, b) => {
    if (a > b)
        return -1;
    if (a < b)
        return 1;
    return 0;
});

console.log(number);