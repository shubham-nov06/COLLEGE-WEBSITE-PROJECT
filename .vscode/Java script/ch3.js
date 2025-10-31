// ------------------loops----------------

// For loop to print numbers from 20 to 39
for (let i = 20; i < 40; i++) {
    console.log(i);
}

// For loop to calculate the cumulative sum of numbers from 1 to 5
let sum = 0;
for (i = 1; i < 6; i++) {
    sum = sum + i;
    console.log(sum);
}

// Example of a for-of loop to iterate over a string
let Name = "shubham";
for (value of Name) {
    console.log(value);
}

// Example of a for-in loop to iterate over the keys of an object
let student = {
    name: "Shubham",
    rollno: 200000000,
    age: 20,
    ispass: true
};
for (let key in student) {
    // Print the key
    console.log("key = ", key);
    // Print the key and its corresponding value
    console.log("key = ", key, ',', "value = ", student[key]);
}

// ------------------Question 1----------------
// For loop to print even numbers from 0 to 100
for (i = 0; i <= 100; i++) {
    if (i % 2 != 0) {
        continue; // Skip odd numbers
    } else {
        console.log("Even numbers are = ", i);
    }
}

// ------------------Question 2----------------
// Guess the number game
let num = 25; // The correct number to guess
let usernum = prompt("Enter number "); // Prompt user for input
while (usernum != num) {
    // Keep prompting until the user guesses correctly
    usernum = prompt("You have entered wrong number, guess again ");
}
console.log("You have entered the right answer");

// ------------------Strings in JavaScript----------------
// Example of creating and accessing strings
let str = "Shubham"; // Create a string
console.log(str[1]); // Access the second character of the string

// Example of template literals
let sentence = `This is a template literal`;
console.log(sentence);

let obj = {
    item: "Pen",
    price: 300,
};
// Using template literals to embed expressions in a string
let output = `The cost is ${obj.price} and name is ${obj.item}`;
console.log(output);

// Example of using \n for a new line and \t for a tab space
let str2 = console.log("My name is Shubham and\ncurrently I am learning\tJavaScript");
console.log(str2.length); // \t is considered as one character

// ------------------String Methods-------------------
// Example of string methods
let name = "shubham"; // Strings are immutable in JavaScript
let age = "24 years";

// str.concat() - Joins two strings
let res = name.concat(age); // Can also use name + age
console.log(res);

// str.replace() - Replaces the first matching value
let ser = name.replace("u", "h"); // Use replaceAll() to replace all matching values
console.log(ser);

// str.charAt() - Returns the character at a specific index
console.log(name.charAt(2));

// ------------------Question 1----------------
// Create a username by appending "@" and the length of the name
let username = prompt("Enter your name");
add = "@";
length = username.length;
username = add.concat(username) + length;
let finalusername = username;
console.log(finalusername);
