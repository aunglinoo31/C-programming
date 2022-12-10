#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    printf("A\t, B\t , C\t");
    scanf("%d %d %d", &A,&B,&C);

    if (A>B & A>C)
    {
        printf("A is the largest!");
     }else if(B>C)
    {
        printf("B is the largest!");
    }
    else
    {
        printf("C is the largest!");
    }

    return 0;
}
