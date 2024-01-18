/*
Problem statement: Given two strings s1 and s2. 
Modify string s1 such that all the common ccharacters of s1 and s2 is to be removed 
and the uncommon characters of s1 and s2 is to be concatenated.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100000

int print(char s[MAX], char v[MAX])
{
	int len1 = strlen(s);
	int len2 = strlen(v);
	int count=0;
	for(int i=0; i<len1; i++)
	{	
		count=0;
		for(int j=0; j<len2;j++)
		{
			if(s[i] == v[j] ){
				count = count+1;
				break;
			}
		}
		if(count == 0){
			printf("%c", s[i]);
		}
		
	}
	return 0;
}


int main()
{
	char str1[20];
	char str2[20];
	int count=0;
	printf("Enter the str1 & str2 : ");
	scanf("%s", str1);
	scanf("%s", str2);
	print(str1,str2);
	print(str2,str1);
	return 0;
}
	
