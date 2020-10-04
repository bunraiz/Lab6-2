#include <stdio.h>
int main(void) 
{
  int  i,Sum;
  Sum = 0;

  i = 12;

  while(i <= 30){

	Sum = Sum+ (i*i);

	i = i+3;
  }
  printf("Sum is %d\n",Sum);
  return 0;
}
