//Stack implementation of linked list based on FIFO principle;
//linkedlist== [data, pointer to next node]
//Definition of linkef list
//~ struct Node{
	//~ int data;
	//~ struct Node* next;
//~ }
//

#include <stdio.h>
#include <iostream> //c++ header file
using namespace std;//for c++ only

struct Node{
	int data;
	struct Node* next;
} *top;


void push(int value)
{
	struct Node *temp = new Node();
	if(temp==NULL) 
	{
		printf("Overflow!");
		return;
	}
	temp->data=value;
	temp->next=top;
	top=t;
}

void pop()
{
	if(top==NULL)
	{ 
		printf("Stack Underflow!");
		return;
	}
	struct Node* temp;
	temp=top;
	top=top->next;
	free(temp);
}
int main()
{
	
}
