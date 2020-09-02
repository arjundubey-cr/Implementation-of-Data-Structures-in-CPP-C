//Stack 
//Linear Data Structure based on LIFO
//Basic Operations: create, push, pop, isEmpty, isFull etc.
//Following is array implementation of stack.

#include <iostream>
#include <stdio.h>
using namespace std;

struct Stack{
	int size;
	int top;
	int *S;
};
void create(struct Stack *st)
{
	printf("Enter size of stack: ");
	scanf("%d", &(st->size));
	st->top=0;
	
	st->S = (int *)malloc((st->size)*sizeof(int));
	printf("Stack is created");	
}
void display(struct Stack *st)
{
	int i;
	for(i=st->top;i>=0;i--)
		printf("%d | ", st->S[i]);
	printf("\n");
}
void push(struct Stack *st, int data)
{
	if(st->top==st->size-1)
		printf("Stack Overflow \n");
	else{
		st->top+=1;
		st->S[st->top]=data;
		printf("Data is pushed to stack\n");
	}
}
void pop(struct Stack *st)
{
	if(st->top==-1){
		cout<<"Stack is Empty\n";
		return;	
	}
	cout<<st->S[st->top];
	printf("Element popped up. \nNew top is %d",st->S[--(st->top)]);
}
bool isEmpty(struct Stack *st)
{
	if(st->top < (st->size - 1))
		return true;
	return false;
} 

bool isFull(struct Stack *st)
{
	if(st.Top == (st->size-1))
		return true;
	else 
		return false;
}
int main()
{
	struct Stack st;
	create(&st);
	push(&st, 14);
	push(&st, 11);
	push(&st, 5);
	push(&st, 10);
	display(&st);
	pop(&st);
}
