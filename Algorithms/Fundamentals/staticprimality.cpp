#include <iostream>
using namespace std;
//simple primality test
static bool isPrime(int n)
{
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
		else
		return true;
}
int main()
{
	int x;
	cin>>x;
	if(isPrime(x)==true)
		cout<<"Primo!"<<endl;
	else
		cout<<"No primo!"<<endl;
}
