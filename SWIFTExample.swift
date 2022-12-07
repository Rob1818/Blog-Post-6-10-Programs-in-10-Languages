func compoundInterest(initial: Double, rate: Double, years: Double) -> Double {
  let final = initial * pow(1 + rate / 100, years)
  return final
}

let final = compoundInterest(initial: 10000, rate: 10, years: 10)

print(final)

// Output: 25937.424601000024
// Run this code at https://swiftfiddle.com/