#include <stdio.h>
#include <math.h>

int main ()
{

float x1, x2, y1, y2, output;

printf("Enter x1,x2,y1,y2 separated by 1 space:");
scanf("%f%f%f%f",&x1, &x2, &y1, &y2);

output = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

printf("The distance is %f:", output);

return 0;
}
