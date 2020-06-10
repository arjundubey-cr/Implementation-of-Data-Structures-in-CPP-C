
#include <iostream>
using namespace std;
double e(int x, int n)
{
	int s = 1;
	if(n==0)
		return s;
	s=1+(x/n*s);
	return e(x,n-1);
}
int main()
{
	int taylor_series_value = e(7,9);
	printf("Value = %d", taylor_series_value);
}

