#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("Enter your score for Mark.\n");
  scanf("%i",&num);
  switch(num)
  {
    case 0 ... 49:
    printf("Sorry you have failed");
    case 50 ... 59:
    printf("Ok, not bad");
    case 60 ... 79:
    printf("This is good");
    case 80 ... 89:
    printf("This is very good");
    case 90 ... 100:
    printf("You are excellent");
  }
  return 0;
}
