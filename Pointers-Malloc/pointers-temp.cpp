#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL , *temp=NULL,n;
	ptr = (int *)malloc(3*sizeof(int));
	temp = ptr;
	for(int i=0; i<3 ; i++,ptr++)
	{
		scanf("%d",ptr);
	}
	
	ptr = temp;
	
	for(int i =0; i<3 ; i++ , ptr++)
	{
		printf("\nptr value is = %d", *ptr);
	}
}
