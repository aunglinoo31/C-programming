#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ft,cm ;
    printf("Enter length in FT\t");
    scanf("%f", &ft);
    /* conversion of cm to ft
    and f to cm = cm / 30.48 */

    cm = ft * 30.48;

    printf("%f", cm);
    return 0;
}
