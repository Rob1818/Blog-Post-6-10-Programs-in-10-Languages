public class Main {
  public static double compoundInterest(double initial, double rate, double years) {
    double finalAnswer = initial * Math.pow(1 + rate / 100, years);

    return finalAnswer;
  }

  public static void main(String[] args) {
    double finalAnswer = compoundInterest(10000, 10, 10);

    System.out.println(finalAnswer);
  }
}

// Output: 25937.424601000024
// Run this code at https://www.sololearn.com/compiler-playground/java