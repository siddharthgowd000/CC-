#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = NULL;
	ptr = (int *)malloc(3*sizeof(int));
	
	printf("\nAddress of ptr = %u",&ptr);
	printf("\nptr is pointing to %u\n",ptr);
	printf("\nptr is pointing to %u with the value =%d\n",ptr,*(ptr+0));
	
	*(ptr+0) = 10;
	*(ptr+1) = 20;
	*(ptr+2) = 30;
	
	printf("\nptr is pointing to %u with the value =%d\n",&ptr[0],*(ptr+0));
	printf("\nptr is pointing to %u with the value =%d\n",&ptr[1],*(ptr+1));
	printf("\nptr is pointing to %u with the value =%d\n",&ptr[2],*(ptr+2));
	

}
