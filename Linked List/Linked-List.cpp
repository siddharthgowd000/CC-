#include<stdio.h>

struct node
{
	int value;
	struct node *ptr;
};

int main()
{	
	//creating nodes 
	struct node n1,n2,n3;
	struct node *temp, *head;
	
	//assigning values
	n1.value = 10;
	n1.ptr = NULL;
	n2.value = 20;
	n2.ptr = NULL;
	n3.value = 30;
	n3.ptr = NULL;
	
	//make relationship or create link.
	
	n1.ptr = &n2;
	n2.ptr = &n3;
	
	//hence created linked list
	
	//accessing values by traversing into all nodes
	
	
	
		head = &n1;
		temp = head;
		
	 // until temp-> NULL and then breaks.	
	
		printf("%d->", temp->value);
		
		temp = temp->ptr;
		// or temp = n1.ptr;
		printf("%d->", temp->value);
		
		temp = temp->ptr;
		// or temp=n2.ptr; now it referring 3rd node address
		printf("%d->", temp->value);
		temp = temp->ptr;
		
		printf("NULL\n");
	
	return 0;
		
}




