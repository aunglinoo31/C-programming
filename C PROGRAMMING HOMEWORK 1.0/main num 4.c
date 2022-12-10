#include <stdio.h>


int main()
{
    float temprature;

    printf("Enter The Temprature\t");

    scanf("%f", &temprature);
    if (temprature > 0)
    {
        printf("Your temperature is above the freezing point.\n");
    }
    else
    {
        printf("It's below the freezing point.\n");
    }
    return 0;
}
