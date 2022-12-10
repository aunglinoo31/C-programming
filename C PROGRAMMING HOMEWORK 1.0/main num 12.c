#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(i<=100)
    {
        printf("%d\n\a", i);
        i+=5; //step=5
    }
    return 0;
}
