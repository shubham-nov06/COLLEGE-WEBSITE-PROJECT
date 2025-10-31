// Operators in JavaScript
let a = 2;
let b = 7;
// Subtract 1 from 'a'
a -= 1; // a = a - 1
// Add 4 to 'b'
b += 4; // b = b + 4
console.log("a = ", a, "b = ", b);

// Conditional statements
let mode = "dark";
let color;

// Check the mode and assign a color based on the condition
if (mode == "dark") {
    color = "black";
} else if (mode == "blue") {
    color = "blue";
} else {
    color = "white";
}
console.log(color);

// Ternary operator example
let age = 21;
// Check if age is greater than 18 and assign the result
let result = age > 18 ? "adult" : "not adult";
console.log(result);

let Name = "Shubham";
// Check if Name is "Shubham" and assign the result
let realname = Name == "Shubham" ? "Yes" : "No";
console.log(realname);

// Question 1: Check if a number is divisible by 5
// Prompt the user to enter a number
let number = prompt("Enter a number ");
console.log(number);
// Check if the number is divisible by 5
if (number % 5 == 0) {
    console.log("Yes");
} else {
    console.log("No");
}

// Question 2: Assign grades based on the number entered
// Prompt the user to enter a number
let number2 = prompt("Enter numbers ");
console.log(number2);
// Check the range of the number and assign a grade
if (number2 > 80 && number2 < 100) {
    console.log("A grade");
} else if (number2 > 70 && number2 <= 89) {
    console.log("B grade");
} else if (number2 > 60 && number2 <= 69) {
    console.log("D grade");
} else if (number2 > 0 && number2 <= 49) {
    console.log("F grade");
}

