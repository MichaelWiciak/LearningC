#include <stdio.h>
#include <math.h>

int main()
{

  int n,m;
  printf("Enter N and M\n");
  scanf("%i%i",&n,&m);
  while (n!=m)
  {
  if (n%2!=0) printf("%i is odd\n",n);
  n++;
  }
  return 0;
}
