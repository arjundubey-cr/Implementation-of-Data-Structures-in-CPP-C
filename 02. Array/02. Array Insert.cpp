#include <iostream>
using namespace std;

void Display(int arr[], int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d ", arr[i]);
	}
}

void Insert(int value, int index, int arr[], int Length)
{
	for(int i=Length;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=value;
}

int main()
{
	int arr[7]={0,1,2,3,4};
	Insert(4, 4, arr, 7);
	Insert(3, 6, arr, 7);
	Display(arr, 7);
}
