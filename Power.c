#include <stdio.h>
#include <math.h>

int main()
{
  for (int power=0, output=1;power<=10;printf("2^%i=%i\n",power, output),output=output*2,power++);
  return 0;
}
