#include <stdio.h>
#include <math.h>

int main()
{
  for (double x=0; x<=3.2;printf("%lf\t%lf\n",x,pow(x,2)+1),x+=0.2);
  return 0;
}
