#include <iostream>
using namespace std;
int main()
{
	int arr[5];//declaring an array in memory
	int *p = new int[5];//allocating memory for array in heap
	printf("%d\n", p);
	for(int i=0;i<5;i++)
	{
		p[i]=i;
		arr[i]=i;
	}
	printf("%d at address %d\n", p[1], &p[1]);
	printf("%d at address %d\n", p[2], &p[2]);
	printf("%d", arr[1]);
}
