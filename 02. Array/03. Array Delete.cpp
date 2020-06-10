#include <iostream>
using namespace std;

struct Array{
	int A[10];
	int size;
	int length;	
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ", arr.A[i]);
}

void Insert(struct Array *arr, int x)
{
	if(arr->length<arr->size)
		arr->A[arr->length++]=x;
}

void Delete(struct Array *arr, int index)
{
	int x=0;
	int i;
	if(index>=0 && index<arr->length)
	{
		x=arr->A[index];
		for(i=index; i<arr->length-1;i++)
			arr->A[i]=arr->A[i+1];
		arr->length--;
		return x;
	}
	return 0;
}
int main()
{
	struct Array arr={{0,1,2,3,4}, 10, 5};
	Insert(&arr, 5);
	Insert(&arr, 9);
	Delete(&arr, 3);
	Display(arr);
}
