#include <iostream>
using namespace std;
int main()
{
	//finds the average number within the elements of an array
	int a[5]={45,67,23,88,99};
	double b,sum;
	b=sizeof(*a)+1;
	sum=0.0;
	for(int i=0;i<b;i++)
	{
		sum+=a[i];
	}
	double avg = sum/b;
	cout<<avg<<endl;
}
