#include <stdio.h>
#include <math.h>
int main() {
  // Create an integer variable that will store the number we get from the user
  int p = 500, r = 0.05, n = 12, t = 10;
  float A = 1 + (r/n);
  int B = p*A;
  int c = n*t;
  float C = pow(B,c);

  printf("Your number is: %f", C);

  return 0;
}
