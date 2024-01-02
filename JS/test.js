// test.js
const {
  add,
  multiply,
  greet,
  subtract,
  isEven,
  divide,
  double,
  squareArray,
  isEvenFilter,
 // sumArray,
} = require('./practice');

// Helper function to format test results with colors
function logResult(testName, result, expected, actual) {
  const reset = '\x1b[0m';
  const green = '\x1b[32m';
  const red = '\x1b[31m';
  const cyan = '\x1b[36m';
  const yellow = '\x1b[33m';

  if (result) {
    console.log(`${green}${testName}: Passed${reset}`);
  } else {
    console.log(`${red}${testName}: Failed${reset}`);
  }
  console.log(`${cyan}  - Expected: ${expected}${reset}`);
  console.log(`${yellow}  - Actual:   ${actual}${reset}`);
  console.log();
}

// Test Problem 1
const addResult = add(3, 7) === 10;
logResult('Addition Test', addResult, 10, add(3, 7));

// Test Problem 2
const multiplyResult = multiply(4, 5) === 20;
logResult('Multiplication Test', multiplyResult, 20, multiply(4, 5));

// Test Problem 3
const greetResult = greet('Alice') === 'Hello, Alice!';
logResult('Greet Test', greetResult, 'Hello, Alice!', greet('Alice'));

// Test Problem 4
const subtractResult = subtract(10, 3) === 7;
logResult('Subtraction Test', subtractResult, 7, subtract(10, 3));

// Test Problem 5
const isEvenResult = isEven(8) === true;
logResult('Is Even Test', isEvenResult, true, isEven(8));

// Test Problem 6
const divideResult = divide(10, 2) === 5;
logResult('Division Test', divideResult, 5, divide(10, 2));

// Test Problem 7
const numbers = [1, 2, 3, 4, 5];
const doubleResult = JSON.stringify(numbers.map(double)) === JSON.stringify([2, 4, 6, 8, 10]);
logResult('Double Test', doubleResult, JSON.stringify([2, 4, 6, 8, 10]), JSON.stringify(numbers.map(double)));

// Test Problem 8
const numsToSquare = [2, 3, 5, 7];
const squareArrayResult = JSON.stringify(squareArray(numsToSquare)) === JSON.stringify([4, 9, 25, 49]);
logResult('Square Array Test', squareArrayResult, JSON.stringify([4, 9, 25, 49]), JSON.stringify(squareArray(numsToSquare)));

// Test Problem 9
const evenNums = [10, 15, 20, 25, 30];
const isEvenFilterResult = JSON.stringify(evenNums.filter(isEvenFilter)) === JSON.stringify([10, 20, 30]);
logResult('Is Even Filter Test', isEvenFilterResult, JSON.stringify([10, 20, 30]), JSON.stringify(evenNums.filter(isEvenFilter)));

// // Test Problem 10
// const numsToSum = [1, 2, 3, 4, 5];
// const sumArrayResult = sumArray(numsToSum) === 15;
// logResult('Sum Array Test', sumArrayResult, 15, sumArray(numsToSum));
