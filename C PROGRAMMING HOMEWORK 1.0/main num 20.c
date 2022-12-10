#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i ;
    printf("Enter your number= \t");
    scanf("%d", &num);
    while (num!=0)
    {
        num/=10;
        i++;
    }

    printf("the number of digits= %d", i);

    return 0;
}
