#include <iostream>
using namespace std;
//finds a harmonic number
static double H(int n)
{
	double sum = 0.0;
	for(int i=1;i<=n;i++)
		sum+=1.0/i;
	cout<<sum;
}
int main()
{
	int a;
	cin>>a;
	H(a);
}
