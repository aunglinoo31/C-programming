#include <stdio.h>
#include <math.h>

int main()
{
    int i, square;
    i=1;

    while(i<=10)

    {
        square= pow(i,2);

        printf("%d\a\t",square);

        i++;
    }
    return 0;
}
