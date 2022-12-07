compoundInterest <- function(initial, rate, years) {
  final <- initial * (1 + rate / 100)^years
  
  return(final)
}

final <- compoundInterest(10000, 10, 10)

print(final)

# Output: 25937.42
#  Run this code at https://rdrr.io/snippets/