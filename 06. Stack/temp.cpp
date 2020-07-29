#include <iostream>
using namespace std;

struct Stack{
	int size;
	int top;
	int *S;
};

void create(struct Stack *st)
{
	printf("Enter Size:- ");
	scanf("%d",&(st->size));
	st->top=-1;
	st->S=(int *)malloc(st->size*sizeof(int));
	printf("Stack Created");
}
int main()
{
	struct Stack st;
	create(&st);
}
