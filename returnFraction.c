#include <stdio.h>
double findFraction(double num);

void main()
{
  double num, fraction;
  printf("Enter your number");
  scanf("%lf", &num);
  fraction = findFraction(num);
  printf("The Fraction part is %lf", fraction);
}

double findFraction(double num)
{
int interger;
double output;
  interger = num;
  output = num - interger;
  return output;
}
