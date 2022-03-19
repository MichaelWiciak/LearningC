#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("Enter a digit to check if its odd or even.\n");
  scanf("%i", &num);
  if (num%2==0) printf("It's even");
  else printf("It's odd");
  return 0;
}
