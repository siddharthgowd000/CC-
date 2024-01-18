#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
  int val;
  struct node *ptr;
};
typedef struct node Node;
void display(Node *temp){
  while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->ptr;
  }
  cout<<"NULL";
}
int searchVal(Node *head, int val);
void appendNode(Node *, Node *);
//for changing name for struct node
int main()

{
  int choice=1;
   Node *temp=NULL,*head=NULL;
   Node *newnode;
   //to assign value into linkedlist
   while(choice){
   newnode=(Node*)malloc(sizeof(Node));
   cout<<"Enter the new node value:";
   cin>>newnode->val;
   newnode->ptr=NULL;
   if(head==NULL){//pointing towards null value
   //assigning new value into head
     //this list is empty;
     head=newnode;
     temp=head;
    }
    else{
      temp->ptr=newnode;
      temp=temp->ptr;//assigning next address of 
    }
    cout<<"do u want to create new node:0/1:";
    cin>>choice;

   }
   display(head);

   
   //newnode at the beginning
   
   newnode = (Node *)malloc(sizeof(Node));
   cout<<"\nEnter the value for new node at beginning: ";
   cin>>newnode->val;
   newnode->ptr=NULL;
   newnode->ptr=head;
   head = newnode;
   temp=head;
   //appendNode(head,newnode);
   display(head);
	
/*	int key;
	cout<<"value to search=";
	cin>>key;
	if(searchVal(head, key) == 0)
	{
		cout<<"\nNot Found";
	}
	else
	{
		cout<<"\nKey value Found\n";
	}
	*/
    return 0;
}

int searchVal(Node *head, int val)
{
	while(head)
	{
		head->ptr = head;
		if(head->val == val)
		{
			return 1;
		}
	}
	return 0;
}

void appendNode(Node *head, Node *newnode)
{
	
   newnode = (Node *)malloc(sizeof(Node));
   cout<<"\nEnter the value for new node: ";
   cin>>newnode->val;
   newnode-> ptr = NULL;
   while(head->ptr)
   {
   	head = head->ptr;
   }
   
   head->ptr = newnode;
}
