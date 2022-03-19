#include <stdio.h>
#include <math.h>

int main ()
{
float distance1, distance2, distance3,v,ta,tc,a;
float u = 0;

printf("Enter me acceleration a, period of time its accelerating, period of time its traveling at contast speed\n");
scanf("%f%f%f",&a,&ta,&tc);

distance1 = u*ta+(float)1/2*a*pow(ta,2);
v = u+a*ta;
distance2 = v*tc;
distance3= distance1 + distance2;

printf("Total distance travelled equals %f.",distance3);

return 0;
}
