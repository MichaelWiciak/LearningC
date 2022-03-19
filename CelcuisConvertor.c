#include <stdio.h>
#include <math.h>

int main ()
{
int Celsius;
double Fahrenheit;

printf("Enter Celsius value:");
scanf("%i",&Celsius);

Fahrenheit=((float)9/5)*Celsius + 32;
printf("That equlats to %lf.",Fahrenheit);

return 0;

}
