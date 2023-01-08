#include <stdio.h>

int main(void) {
  int num, digits[10] = {0};

  // input number
  printf("Enter a number: ");
  scanf("%d", &num);

  // count frequency of each digit
  while (num > 0) {
    digits[num % 10]++;
    num /= 10;
  }

  // output frequency of each digit
  for (int i = 0; i < 10; i++) {
    if (digits[i] > 0) {
      printf("The frequency of %d is %d.\n", i, digits[i]);
    }
  }

  return 0;
}
