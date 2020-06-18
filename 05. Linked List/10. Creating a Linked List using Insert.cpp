#include <bits/stdc++.h>

using namespace std;

int counter=0;
struct Node
{
	int data;
	struct Node* next;
}*first=NULL;

int count(struct Node* p)
{
	while(p)
	{	
		p=p->next;
		counter++;
	}
	return counter;
}

void Insert(struct Node *p, int val, int index)
{
	struct Node *t;
	if(index<0||index>count(p))
		return;
	
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data=val;
	
	if(index==0){	
		t->next=first;
		first=t;
	}
	else{
		for(int i=0;i<index-1;i++){
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
	
	
}

void Display(struct Node* p){
	while(p)
	{
		printf("%d-> ", p->data);
		p=p->next;
	}
}

int main()
{
	Insert(first, 4, 0);
	Insert(first, 14, 1);
	Insert(first, 24, 2);
	Insert(first, 34, 3);
	Insert(first, 44, 4);
	Insert(first, 54, 5);
	Display(first);
}
