#include <iostream>
using namespace std;
int main()
{
	//finds the maximum number within the elements of an array
	int a[5]={45,67,23,88,99};
	int max = a[0];
	for(int i=0;i<sizeof(*a)+1;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	cout<<max<<endl;
}
