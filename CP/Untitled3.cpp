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
//for changing name for struct node
int main()

{
  int choice=1;
   Node *temp=NULL,*head=NULL;
   Node *newnode;//to assign value into linkedlist
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

    return 0;
}
