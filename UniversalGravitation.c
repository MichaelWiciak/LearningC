#include <stdio.h>
#include <math.h>

int main ()
{

double m1, m2, r, gravitationalForce;
double g = 6.674*pow(10,-11);

printf("Enter masses of the two objects and then the distance between them:");
scanf("%lf%lf%lf",&m1,&m2,&r);

gravitationalForce = g*((m1*m2)/(pow(r,2)));

printf("gravitationalForce is equal to %lf.\n", gravitationalForce);

return 0;
}
