const ci = function compoundInterest(
  initial: number,
  rate: number,
  years: number
): number {
  let result = initial * Math.pow(1 + rate / 100, years);
  return result;
};

console.log(ci(10000, 10, 10));

// Output: 25937.424601000024
// Run this code at https://www.typescriptlang.org/play
