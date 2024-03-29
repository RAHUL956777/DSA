//prime number is a natural number greater than 1 that is not a product of two small natural numbers.

//isPrime(5) = true(1*5 or 5*1)
//isPrime(4) = false(1*4 or 2*2 or 4*1)

function isPrime(n) {
  if (n < 2) return false;
  for (let i = 2; i < n; i++) {
    if (n % i === 0) {
      return false;
    }
  }
  return true;
}
//it has O(n) time complexicity

console.log(isPrime(2)); //false
console.log(isPrime(5)); //true
console.log(isPrime(1)); //false

//opmitized solution
// integers larger than the square root do not need to be checked because , whenever `n=a*b`, one of the two factors `a` and `b` is less than or equal to the square root of `n`.

/*  let's see an example
    n=24,a=4 and b=6
    the square root of 24 is 4.89
    4 is less than 4.89
    a is less than the square root of n

    another example
    n=35,a=5,b=7
    the square root of 35 is 5.91
    a is less than the square root of n
 */
function isPrimeOpt(n) {
  if (n < 2) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) {
      return false;
    }
  }
  return true;
}

//it has O(sqrt(n)) time complexicity
