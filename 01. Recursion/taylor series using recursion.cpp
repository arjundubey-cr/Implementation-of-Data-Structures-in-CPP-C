
#include <iostream>
using namespace std;
float e(int x, int n)
{
	static float p=1, f=1;
	float r;
	if(n==0) return 1;
	else{
		r=e(x, n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}
int main()
{
	float taylor_series_value = e(1,9);
	printf("Value = %f", taylor_series_value);
}

