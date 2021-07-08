
let animals = [
    'Horse', 'Ant', 'Elephant', 'Tiger', 'Dog','Yak'
];

animals.sort();
console.log(animals);

animals.sort((a, b) => {
    if (a > b)
        return -1;
    if (a < b)
        return 1;
    return 0;
});

console.log(animals);