#include<stdio.h>

struct node
{
	int value;
	struct node *ptr;
};
void dispList(struct node *temp)
{
	printf("\nList is\n");
	while(temp){
		printf("%d->", temp->value);
		temp = temp->ptr;
		// or temp = n1.ptr;
	}
	printf("NULL\n");
}


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
	
		dispList(temp);
		
	//new node insert between n2 and n3
	
	struct node n4;
	n4.value = 40;
	n4.ptr = &n3;
	n2.ptr = &n4;
	
	printf("\nAfter insertion of new node \n");
	dispList(temp);
	
	//insert at starting on linked list
	
	struct node n5;
	n5.value= 101;
	n5.ptr = &n1;
	head = &n5;
	temp = head;
	
	dispList(temp);
		
	
	return 0;
		
}




