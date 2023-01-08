#include <stdio.h>

int main() {
  int num1, num2, hcf;

  // input two numbers
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // store smaller number in separate variable
  int smaller = (num1 < num2) ? num1 : num2;

  // find HCF using modulo operator
  for (int i = smaller; i >= 1; i--) {
    if (num1 % i == 0 && num2 % i == 0) {
      hcf = i;
      break;
    }
  }

  // output HCF
  printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

  return 0;
}
