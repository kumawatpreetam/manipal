function factorialIterative(n) {
  let fact = 1;
  for (let i = 2; i <= n; i++) {
    fact *= i;
  }

  return fact;
}

// Example usage:
console.log(factorialIterative(5)); // Output: 120
