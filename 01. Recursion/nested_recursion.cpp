/***
 * Nested Recursion is a type of recursion when recursive function
 * itself is passed in as parameter to recursive call.
 * ***/

#include <iostream>
using namespace std;
int fun(int n)
{	
	if(n>0)
	{
		printf("%d ", n);
		return fun(fun(n-1));
	}
	return 0;
}
int main()
{
	fun(25);
}

