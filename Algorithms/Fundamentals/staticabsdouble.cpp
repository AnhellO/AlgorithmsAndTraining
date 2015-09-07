#include <iostream>
using namespace std;
//converts a negative number (integer or decimal) to positive
static double abs(double x)
{
	if(x<0.0)
		cout<<-x<<endl;
	else
		cout<<x<<endl;
}
int main()
{
	double a;
	cin>>a;
	abs(a);
}
