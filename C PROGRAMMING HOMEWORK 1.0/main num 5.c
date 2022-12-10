#include <stdio.h>
 int main()
 {
     float fahrenteit,celsius;
     printf("Enter the temperature in Fahrenheit\t");
     scanf("%f", &fahrenteit);

     /* F= (C * 1.8)+32
        C= (F-32)/1.8
        K= C+273.15*/

     celsius = (fahrenteit-32) / 1.8;

     printf("celsius = %f", celsius);
     return 0;
 }
