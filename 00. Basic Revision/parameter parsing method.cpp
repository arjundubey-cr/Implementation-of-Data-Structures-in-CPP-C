#include <iostream>
using namespace std;

void callByValue(int a, int b)
{
	int temp = b;
	a = b;
	b = temp;
}

void callByAddress(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void callByReference(int &a, int &b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}



int main()
{
	int a=3, b=4;
	callByValue(a,b);
	cout<<"Value after Swapping(Call by Value)::"<<a<<" "<<b<<"\n";
	callByAddress(&a, &b);
	cout<<"Value after Swapping(Call by Address)::"<<a<<" "<<b<<"\n";
	callByReference(a, b);
	cout<<"Value after Swapping(Call by Reference)::"<<a<<" "<<b<<"\n";
	
}
