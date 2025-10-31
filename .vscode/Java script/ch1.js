// Logging some introductory messages to the console
console.log(" Weccome to here  my name is Shubham yyaayyyyyyyyyyyy");
console.log("yyyyyyyooooooooooooooooooooooo");
console.log("i want to be good coder");

// ------------------------- Variables ------------------------------- // 

// Declaring variables without using var, let, or const (not recommended)
name = " SHubham ";
console.log(name);

age = 200;
console.log(age);
age2 = 900;
console.log(age + age2);

// Demonstrating null and undefined values
x = null;
y = undefined;
console.log(x, y);

// Declaring variables for numeric values
isfollow = 20;
totalprice = 22;

// Note: Always use let or const to declare variables. Avoid using var.

// Declaring a variable using let
let Isprice = 34;
console.log(Isprice);

// Declaring a string variable
let fullName = "tony stark";
console.log(fullName);

// --------------------- Data Types ------------------- //
// JavaScript has primitive data types: numbers, strings, booleans, undefined, null, bigint, and symbol
// Primitive types (7) and non-primitive types like objects

// Example of a number data type
let Age = 25;
console.log(Age);
typeof Age; // Checking the type of the variable

// Example of a boolean data type
isFollow = true;

// --------------------- Objects ------------------- //

// Declaring an object using const
const student = { // Objects are declared with const or let
     fullName: "Shubham", // Key-value pairs, no '=' or ';' used
     aagE: 30,
     cgpa: 8.6,
     isPass: true,
};

// Accessing and modifying object properties
student["name"] = "Shubham";
console.log(student["name"]);
student["aagE"] = student["aagE"] + 1; // Incrementing the age property
console.log(student["aagE"]);

// Question 1: Example of another object
const product = {
    name: "Parker pen",
    rating: 4,
    offer: 5,
    price: 700,
};
console.log(product);

// Question 2: Example of a profile object
const profile = {
    name: "Shubham",
    passion: "Entrepreneur",
    details: "Apna college | Ex-microsoft, DRDO To educate some students",
    followers: "300k",
    following: 4,
};
console.log(profile);

// Checking the type of a variable
console.log(typeof name);
