/*
  Implement a function `isPalindrome` which takes a string as argument and returns true/false as its result.
  Note: the input string is case-insensitive which means 'Nan' is a palindrom as 'N' and 'n' are considered case-insensitive.

  Once you've implemented the logic, test your code by running
  - `npm run test-palindrome`
*/

function isPalindrome(str) {
  const cleanstr = str.replace(/\s/g, '').replace(/[^\s\w]/g, '').toLowerCase(); 
  const revrs = cleanstr.split('').reverse().join('');

  if (revrs==cleanstr){
  return true;
  }

  else { 
  return false;
  }
}


module.exports = isPalindrome;
