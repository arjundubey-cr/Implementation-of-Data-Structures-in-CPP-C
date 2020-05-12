#include <iostream>
using namespace std;
int main()
{
	/**
	 * Call by reference is like a nickname given to variable.
	 * We pass in the same address to other variable using '&' and the now both the variables have access to the value.
	 * increment and decrement applied are applicable on both the variables.
	 * **/
	int a=10;
	int &r = a;
	a++;
	cout<<"Value of a after increment::"<<a<<"\n";
	cout<<"Value of r after increment applied on a::"<<r<<"\n";
}
