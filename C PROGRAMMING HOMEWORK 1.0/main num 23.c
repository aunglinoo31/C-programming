#include <stdio.h>

int main() {
  int num, reversed = 0, original;

  // input number
  printf("Enter a number: ");
  scanf("%d", &num);

  // store number in separate variable
  original = num;

  // reverse number
  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }

  // compare original and reversed numbers
  if (original == reversed) {
    printf("The number is a palindrome.\n");
  } else {
    printf("The number is not a palindrome.\n");
  }

  return 0;
}
