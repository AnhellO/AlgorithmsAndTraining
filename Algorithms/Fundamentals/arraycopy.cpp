#include <iostream>
using namespace std;
int main()
{
	//copies the elements from one array to another
	int a[5]={45,67,23,88,99},b[5]={},n;
	n = sizeof(*a)+1;
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(int j=0;j<n;j++)
	{
		cout<<b[j]<<endl;
	}
}
