#include <iostream>
#include <cmath>

using namespace std;

double compoundInterest(double initial, double rate, double years) {
  double final = initial * pow(1 + rate / 100, years);
  return final;
}

int main() {
  double final = compoundInterest(10000, 10, 10);
  cout << final << endl;
  return 0;
}

// Output: 25937.4
// Run this code at https://cpp.sh/
