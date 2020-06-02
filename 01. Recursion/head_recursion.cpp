//Head Recursion is a type of recursion where the function's call
//to itself in the first statement of function.

#include <iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d ",n);
	}
}
int main()
{
	//Program for tail recursion
	fun(25);
}

