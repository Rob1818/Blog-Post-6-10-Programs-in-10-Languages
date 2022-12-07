package main

import (
    "fmt"
    "math"
)

func compoundInterest(initial float64, rate float64, years float64) float64 {
    final := initial * math.Pow(1 + rate/100, years)
    return final
}

func main() {
    final := compoundInterest(10000, 10, 10)
    fmt.Println(final)
}

// Output: 25937.424601000017
// Run this code at https://go.dev/play/