#include <stdio.h>
#include<math.h>

int main(){

 float radius, Area;
    printf("Enter your Radius\t");

    scanf("%f", &radius);


    Area= M_PI * pow(radius,2);

    printf("Area %f", Area);

    return 0;
}
