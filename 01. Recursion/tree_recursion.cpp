/**
 * If a recursive function calls itself more than one time in one
 * function call then that recursion is called tree recursion.
 * **/
#include <iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		fun(n-1);
		fun(n-1);
	}
}
int main()
{
	//Program for tail recursion
	fun(25);
}

