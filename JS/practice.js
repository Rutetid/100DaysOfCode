// Problem 1: Create an arrow function called add that takes two parameters and returns their sum.
const add = (a,b) => (a+b);

// Problem 2: Convert the following function expression to an arrow function:
// const multiply = function(x, y) { return x * y; };
const multiply = (x,y) => (x*y);

// Problem 3: Use an arrow function to create a function called greet that takes a name parameter and returns a greeting message.

const greet = (name) => ("Hello, " + (name) + "!")

// Problem 4: Convert the following function declaration to an arrow function:
// function subtract(x, y) { return x - y; }
const subtract = (x,y) => (x - y);


// Problem 5: Write an arrow function called isEven that takes a number as a parameter and returns true if it's even, false otherwise.

const isEven = (number) => (number % 2 === 0);
// Problem 6: Convert the following arrow function to a regular function expression:
// const divide = (x, y) => x / y;
function divide(x,y){
    return x/y
}
// Problem 7: Use the map function and an arrow function to double each number in the array.
// const numbers = [1, 2, 3, 4, 5];
const double = (num) => (num *2)

// Problem 8: Create an arrow function called squareArray that takes an array of numbers and returns a new array with each number squared.
const squareArray = (array) => array.map((array) => (array * array))
// Problem 9: Use the filter function and an arrow function to get only the even numbers from the array.
// const nums = [10, 15, 20, 25, 30];
const isEvenFilter = (num) => (num %2 === 0)
// Problem 10: Write an arrow function called sumArray that takes an array of numbers and returns the sum of all elements.
//const sumArray = (array) => (for(let i = 0; i<array.length ; i++))
// Add any additional instructions or variations as needed for your students.



module.exports = {
  add,
  multiply,
  greet,
  subtract,
  isEven,
  divide,
  double,
  squareArray,
  isEvenFilter,
  //sumArray,
};