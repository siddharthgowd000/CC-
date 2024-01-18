/*  03/01/2024  - notes  */

#include<stdio.h>

int *func()
{
	static int b=10;
	return &b;
}

int main()
{
	int *ptr;
	int a[3] = {1,2,3};
	
	ptr = &a[0];
	
	printf("\nAddress of a[0] =%u and its value = %d",&a[0],a[0]);
	printf("\nAddress of ptr =%u and its contents =%d",&ptr,*ptr);
	ptr += 1;
	printf("\nAddress of ptr =%u and its contents =%d",&ptr,*ptr);
	
	// we can go throgh like this also., here ptr is on index 1 , bcoz we already incremented.
	
	printf("\nContents a[2] =%d",*(ptr+1));
	
	/*
		ARRAY and POINTER are Equivalent to each other.
		by incrementing index in *(a+0), we can go through array
		arr[] <=> *arr <=> arr[] coversion from each other.	*/
	printf("\nValue of a[0]=%d", *(a+0));
	printf("\nValue of a[1]=%d", *(a+1));
	
	// Name of array itself represents the base address of Array.
	//doubt
	// dangling pointer
	int *p = NULL;
	p = func();
	printf("\n%d", *ptr);
	
	return 0;
}
