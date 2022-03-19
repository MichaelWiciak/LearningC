#include <stdio.h>
double returnLargestParameter(double num1, double num2, double num3 );

void main()
{
  double num1, num2, num3, output;
  printf("Enter your number");
  scanf("%lf%lf%lf", &num1,&num2,&num3);
  output = returnLargestParameter(num1,num2,num3);
  printf("The largest parameter is: %lf", output);
}

double returnLargestParameter(double num1, double num2, double num3)
{
if (num1 > num2 && num1 > num3)
return num1;
else if (num2 > num3 && num2 > num1)
return num2;
else if (num3 > num1 && num3 > num2)
return num3;
else
return 0;
}
