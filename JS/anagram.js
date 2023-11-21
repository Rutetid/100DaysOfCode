/*
  Write a function `isAnagram` which takes 2 parameters and returns true/false if those are anagrams or not.
  What's Anagram?
  - A word, phrase, or name formed by rearranging the letters of another, such as spar, formed from rasp.

  Once you've implemented the logic, test your code by running
  - `npm run test-anagram`
*/

function isAnagram(str1, str2) {
  const cleanStr1 = str1.replace(/\s/g, '').toLowerCase();
  const cleanStr2 = str2.replace(/\s/g, '').toLowerCase();
  
  const ss1 = cleanStr1.split('').sort().join('');
  const ss2 = cleanStr2.split('').sort().join('');
  if(cleanStr1.length !== cleanStr2.length)
  return false;
  
  if(ss1 == ss2)
  return true;

  else 
  return false;
  }
  
  module.exports = isAnagram;
  