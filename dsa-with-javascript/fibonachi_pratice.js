//problemgive a number 'n' and find the first 'n' elements of the fibonachi sequence
function fibonachi(n) {
  const fib = [0, 1];
  for (let i = 2; i < n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  return fib;
}

console.log(fibonachi(5));
