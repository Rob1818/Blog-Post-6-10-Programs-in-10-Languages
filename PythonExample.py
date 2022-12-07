#!/usr/bin/python3

def compoundInterest(initial, rate, years):
    final = initial * (1 + rate / 100) ** years
    return final

final = compoundInterest(10000, 10, 10)

print(final)

#  Output: 25937.424601000024
#  Run this code at https://www.sololearn.com/compiler-playground/cOAXyhEmN1f7