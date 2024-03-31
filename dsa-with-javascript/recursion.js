// recursion is a problem sloving teachnoque where the solution depends on solutions to smaller instances of the same probelm means whan a function call itself

/*
every recursive solution needs to have a base case - a condition to terminate the recursion.

recursion might simplify solving a problem but it doesnot always translate to a faster solution. A recursive solution may be far worse compared to an iterative solution

*/

// recursive fibonachi sequence upto n

function recursiveFibonachi(n) {
  if (n < 2) {
    return n;
  }
  return recursiveFibonachi(n - 1) + recursiveFibonachi(n - 2);
}

console.log(recursiveFibonachi(0));
console.log(recursiveFibonachi(1));
console.log(recursiveFibonachi(2));
console.log(recursiveFibonachi(3));
console.log(recursiveFibonachi(4));
console.log(recursiveFibonachi(5));
console.log(recursiveFibonachi(6));
console.log(recursiveFibonachi(7));

/*
0---0
1----1
2---0+1 -> 1
3----1+1-> 2
4----2+1 -> 3
5-----3+2-> 5
6-----5+3-> 8
7-----8+5-> 13
8---and so on


time complexicity 
O(n) for iteratuve solution
O(2 power n) for recursive solution

so for fibonatchi sequence problem recursive solution is not optimized solution

*/

// factorial using recursion
function recursiveFactorial(n) {
  if (n === 0) return 1;
  return n * recursiveFactorial(n - 1);
}
