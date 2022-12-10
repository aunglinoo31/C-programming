#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, sum=0 , product= 1, number;
    printf("Enter 10 number\t");
    while(i<=10)
    {
        scanf("%d", &number);
        sum+=number;
        product*=number;
        printf("sum= %d\n", sum);
        printf("product= %d\n", product);
        i++;
    }
    return 0;
}
