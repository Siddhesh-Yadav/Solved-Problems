var playerCount = 8;//will come from the input
var numbers = [1, 2, 3, 4, 5, 6, 7, 8];
var allotedPeople = [];
var randomNumber;
var generateRandomNumber = () => {
    randomNumber = Math.floor(Math.random() * (playerCount + 1));
}
for (var i = 0; i < playerCount; i++) {
    while (allotedPeople.every((d) => d == randomNumber)) {
        generateRandomNumber();
    };
    allotedPeople.push(randomNumber);
}
console.log(allotedPeople);