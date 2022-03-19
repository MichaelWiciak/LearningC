#include <stdio.h>
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


}
