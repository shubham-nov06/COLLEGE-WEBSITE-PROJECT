//------------Chapter 4 = Arrays  -----------------//
let array = [ "shubham" , "aadi" ,"y" ,"o" , "yo" ];

// Add an element to the end of the array
array.push("newElement");

// Remove the last element from the array
let removedElement = array.pop();

// Add an element to the beginning of the array
array.unshift("firstElement");

// Remove the first element from the array
let firstRemoved = array.shift();

// Find the index of an element
let index = array.indexOf("yo");

// Check if an element exists in the array
let exists = array.includes("aadi");

// Sort the array alphabetically
array.sort();

// Reverse the array
array.reverse();

// Log the final array
console.log(array);