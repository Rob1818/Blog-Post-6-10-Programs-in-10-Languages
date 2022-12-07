#include <stdio.h>
#include <math.h>

double compoundInterest(double initial, double rate, double years) {
    double final = initial * pow(1 + rate / 100, years);
    return final;
}

int main() {
    double final = compoundInterest(10000, 10, 10);
    printf("%f\n", final);
    return 0;
}

// Output: 25937.424601
// Run this code at https://www.tutorialspoint.com/online_c_compiler.php