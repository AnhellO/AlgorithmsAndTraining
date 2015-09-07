#include <iostream>
using namespace std;
//finds the greatest common divisor between two numbers
int gcd(int p, int q)
{
	if(q==0)
		return p;
	else
	{
		int r=p%q;
		return gcd(q,r);
	}		
}
int main()
{
	int x,y;
	cin>>x>>y;
	int z = gcd(x,y);
	cout<<z<<endl;
	return 0;
}
