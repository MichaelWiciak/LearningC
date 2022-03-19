#include <stdio.h>
#include <math.h>

int main ()
{
float Diameter, Area, Perimeter;
float pi = 3.14;

printf("Enter Diameter:");
scanf("%f",&Diameter);

Area = pi*pow((Diameter/2),2);
Perimeter = 2*pi*(Diameter/2);

printf("Area = %f and perimeter = %f", Area, Perimeter);

return 0;
}
