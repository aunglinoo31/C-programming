#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b;
    printf("Enter number= ");
    scanf("%d", &n);
    for( b= n; b>=1 ; b--)
    {
        printf("%d\n", b);
    }
    return 0;
}
