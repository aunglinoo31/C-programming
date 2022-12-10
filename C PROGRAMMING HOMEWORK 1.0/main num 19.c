#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i , R;
    printf("Enter Your Number= ");
    scanf("%d", &num);
    for (i=1; i<=12 ; i++)
    {
        R= num * i;
        printf("R= %d\n", R);
    }
    return 0;
}
