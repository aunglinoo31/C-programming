#include <stdio.h>

int main(int argc, char *argv[]) {
  int number, last_digit, first_digit;

  // Read the number from the standard input
  scanf("%d", &number);

  // Find the last digit
  last_digit = number % 10;

  // Find the first digit
  while (number >= 10) {
    number /= 10;
  }
  first_digit = number;

  // Output the first and last digits
  printf("First digit: %d\n", first_digit);
  printf("Last digit: %d\n", last_digit);

  return 0;
}
