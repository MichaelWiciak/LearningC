#include <stdio.h>
int main ()
{
   for (int i,j=1; i<60;i+=j, j+=i, printf("i=%i, j=%i",i,j));
   return 0;
}
