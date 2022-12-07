function compoundInterest(initial, rate, years) {
  let final = initial * Math.pow(1 + rate / 100, years);
  return final;
}

let final = compoundInterest(10000, 10, 10);

console.log(final);

// Output: 25937.424601000024
// Run this code at https://jsfiddle.net/
