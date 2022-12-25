#include <stdio.h>
int main()
{

    int a,i,x,d,b;
    printf("enter a decimal number ");
    scanf("%d", &a);
    {
        x=0;
        i=a;
        while(i>0)
        {
            d= i%2;
            b =x*10+d;
            printf("%d\n\a",b);
            i=i/2;
        }
    }
    return 0;
}
