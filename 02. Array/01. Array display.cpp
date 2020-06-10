#include <iostream>
using namespace std;

void Display(int arr[], int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[5]={0,1,2,3,4};
	Display(arr, 5);
}
