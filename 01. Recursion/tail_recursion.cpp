//Tail Recursion is a type of recursion where the function's call
//to itself in the last statement.

#include <iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		fun(n-1);
	}
}
int main()
{
	//Program for tail recursion
	fun(25);
}
