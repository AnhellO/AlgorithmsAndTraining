#include <iostream>
using namespace std;
int main()
{
	//reverses the order of the elements of a given array
	int a[5]={45,67,23,88,99},n;
	n = sizeof(*a)+1;
	for(int i=0;i<n/2;i++)
	{
		double temp = a[i];
		a[i] = a[n-1-i];
		a[n-i-1] = temp;
	}
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<endl;
	}
}
