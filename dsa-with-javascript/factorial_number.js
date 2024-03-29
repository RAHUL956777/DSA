//factorial means multiplication of its previous number from n to 1
function fact(n) {
  let result = 1;
  for (let i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

console.log(fact(5));
