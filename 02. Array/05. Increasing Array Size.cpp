#include <iostream>
using namespace std;
int main()
{
	//allocating memory for array in heap and assigning values to it.
	int *p = (int *)malloc(3*sizeof(int));
	p[0]=5;
	p[1]=12;
	p[2]=15;
	
	//allocating memory for an array of larger size and copying data from
	//previous array into this one.
	int *q= (int *)malloc(6*sizeof(int));
	for(int i=0;i<3;i++)
		q[i]=p[i];
	
	//clearing the memory of p
	free(p);
	
	//assinging q to the memory p
	p=q;
	
	for(int i=0;i<3;i++)
	{
		printf("%d ", p[i]);
	}
	
	//pointing q to null;
	q=NULL;
	
	
}
