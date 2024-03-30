//problem Give a positive integer 'n', determine if the number is a power of 2 or not An integer is a power of two if there exists an integer 'x' such that 'n' === 2 power x

// isPowerOfTwo(1) => true
// isPowerOfTwo(16) => true
// isPowerOfTwo(3) => false

function isPowerOfTwo(n) {
  if (n < 1) return false;
  while (n > 1) {
    if (n % 2 !== 0) return false;
    n = n / 2;
  }
  return true;
}

console.log(isPowerOfTwo(1));
// time complexicity is O(log(n)) because we are dividing the number by 2 in each iteration

/*
In bunary representation of a power of 2, there is only one bit set to 1. For example, 2^3 = 8, 2^4 = 16, 2^5 = 32, and so on. In binary representation, they are 1000, 10000, 100000, and so on. In each case, there is only one bit set to 1. So, if we subtract 1 from a power of 2, we get a number that has all bits set to 1 except the bit that was set to 1 in the power of 2. For example, 2^3 = 8, 8 - 1 = 7, and in binary representation, they are 1000 and 0111. If we perform a bitwise AND operation between a power of 2 and a number that is 1 less than the power of 2, the result will be 0. So, if the result is 0, the number is a power of 2.

*/
function isPBitwise(n) {
  if (n < 1) return false;
  return (n & (n - 1)) === 0;
}

//time complexicity is O(1)
