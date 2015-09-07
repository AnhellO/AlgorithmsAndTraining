#include <iostream>
using namespace std;
//converts a negative integer number to positive
static int abs(int x)
{
	if(x<0)
		cout<<-x<<endl;
	else
		cout<<x<<endl;
}
int main()
{
	int a;
	cin>>a;
	abs(a);
}
