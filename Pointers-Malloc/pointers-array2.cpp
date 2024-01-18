// 3/1/24
	// Name of array itself represents the base address of Array.
#include <stdio.h>
int main()
{
  int *p;
  int *t;
  int a[3] = {1,2,3};
  p=&a[0];
  t=a;
  printf("%d\n",*p);
  printf("%d\n",*t);
}
