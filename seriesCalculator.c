]#include <stdio.h>
#include <math.h>
double series(int n, double x);

void main()
{
  int n; double x, output;
  printf("Enter your n and x");
  scanf("%lf%i", &x,&n);
  output = series(n,x);
  printf("The value of the series is: %lf", output);
}

double series(int n, double x)
{
_Bool isEven;
double output=0; int counter;
if (n % 2 == 0)
isEven = 1;
else
isEven = 0;

if (isEven)
{
counter = 0;
while (counter < n)
{
output += pow(x,counter);
counter += 2;
}
}
else
{
  counter = 1;
  while (counter < n);
  {
  output += pow(x,counter);
  counter += 2;
  }
}
return output;
}
