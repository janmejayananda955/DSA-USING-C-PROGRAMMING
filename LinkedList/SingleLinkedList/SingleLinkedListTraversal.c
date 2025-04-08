#include<stdio.h>
#include<stdlib.h>   	//used for malloc operation

//Global variable declaration
struct Node{
	char data;
	struct Node* Link;	
};

//function initialization
void traversing(struct Node *ptr){
	while(ptr!=NULL){
		printf("%c",ptr->data);
		ptr =ptr->Link;
	}
}
void main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	//allocate HEAP memory to Nodes
	head =(struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third =(struct Node *)malloc(sizeof(struct Node));
	fourth =(struct Node *)malloc(sizeof(struct Node));
	
	//	value assign to nodes
	
	//value assign to head or 1st node and link to 2nd node
	head->data= 'D';
	head->Link=second;
	
	//value assign to 2nd node and link to 3rd node
	second->data= 'I';
	second->Link= third;
	
	//value assign to 3rd node and link to 4th node
	third->data= 'P';
	third->Link= fourth;
	
	//value assign to 4th node and link to next node(There is no next so assign with"NULL")
	fourth->data= 'U';
	fourth->Link=NULL;
	
	//calling traversing/display function
	traversing(head);//it will take head node as pointer for traversing
}