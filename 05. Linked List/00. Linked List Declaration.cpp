#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

int main()
{
	//Declaring a pointer of type structure Node
	struct Node *p;
	
	//Allocating memory for the structure 
	p = (struct Node*)malloc(sizeof(struct Node));
	
	//assigning the data value to the structure
	p->data=10;
	
	//assigning the next node value
	p->next=NULL;	
}
