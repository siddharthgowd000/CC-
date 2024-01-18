#include <iostream>
using namespace std;
//backward listing
//adding value at first:

typedef struct node {
    int data;
    struct node *next;
    struct node *previous;
}Node;
void display(Node *h){
    while (h!=NULL){
        cout<<h->data<<"->";
        h=h->next;
    }
    //cout<<"NULL";
}
void backwardlist(Node *h){//printing elements from backward
    while(h->next !=NULL){
        h=h->next;
    }
    do{
        cout<<h->data<<"->";
        h=h->previous;    
    }while(h!=NULL);
    //cout<<"NULL";
}
void addvalue(Node *newnode){
    newnode=(Node*)malloc(sizeof(Node));
}
int main(){
    Node *head=NULL,*temp=NULL;
    Node *newnode;
    int choice =1;
    while(choice){
    newnode=(Node*)malloc(sizeof(Node));
    cout<<"Enter new node:";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->previous=NULL;
    if(head==NULL){
        head=newnode;
        temp=head;
        }
    else{
        //newnode=temp->next;
        temp->next=newnode;
        newnode->previous=temp;
        temp=temp->next;
    }
    cout<<"do you want to create node 0/1:";
    cin>>choice;
    }
    display(head);
    cout<<endl;
    backwardlist(head);
    return 0;
}
