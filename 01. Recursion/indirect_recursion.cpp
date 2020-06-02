/**
 * If a recursive function calls some other recursive function
 * then that recursion is called indirect recursion.
 * **/
#include <iostream>
using namespace std;
void funA(int n)
{
	
	if(n>0)
	{
		printf("%d", n);
		funB(n-1);
	}
}

void funB(int n)
{
	if(n>1)
	{
		printf("%d ",n);
		funA(n/2);
	}
	
}
int main()
{
	//Program for tail recursion
	funA(25);
}

