#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number\t");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Your number is an even number.\n");
    }
        else
        {
            printf("The number you have entered is an odd.\n");
        }
        return 0;
}
