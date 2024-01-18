#include<stdio.h>

int main()
{
    int a=10;
    int *ptr;

    ptr = &a;
    printf("\nAddress of a=%u",&a);
    printf("\nAddress of ptr=%u",&ptr);
    printf("\nContents of ptr=%u",ptr);
    printf("\nValues of a=%d",a);
    printf("\nValue of using ptr=%d", *ptr);

    return 0;
}
