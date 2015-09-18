#include <iostream>
#include <math.h>
using namespace std;
//given two sides of a triangle, finds the hypotenuse
static double hypotenuse(double a, double b)
{
	cout<<sqrt(a*a+b*b);
}
int main()
{
	double x,y;
	cin>>x>>y;
	hypotenuse(x,y);
}
