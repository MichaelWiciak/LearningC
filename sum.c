#include <stdio.h>
int sum(int num1, int num2, int num3);

int main()
{
int num1, num2, num3, addedNumbers;
printf("Enter your three numbers");
scanf("%i%i%i", &num1, &num2, &num3);
addedNumbers = sum(num1,num2,num3);
printf("Sum of input is %i", addedNumbers);
}

int sum(int num1, int num2, int num3)
{
return num1+num2+num3;
}
