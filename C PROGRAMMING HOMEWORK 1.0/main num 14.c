#include <stdio.h>

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n-1);
}

int main(int argc, char *argv[]) {
  int n;

  // Read the value of n from the standard input
  scanf("%d", &n);

  // Calculate the factorial of n
  int result = factorial(n);

  // Print the result to the standard output
  printf("%d\n", result);

  return 0;
}
