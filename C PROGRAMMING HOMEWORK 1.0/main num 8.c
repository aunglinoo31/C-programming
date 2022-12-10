#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum ;
    i=3;
    sum= 0;
    while (i<=9)
    {
        sum+=i;
        i++;
    }
    printf("%d\n\a", sum);

    return 0;
}
