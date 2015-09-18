#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;
//finds a random double number in the range of a and b
double fRand(double fMin, double fMax)
{
    srand(time(0));
	double f = (double)rand() / RAND_MAX;
    cout << fMin + f * (fMax - fMin) << endl;
}
int main()
{
	double a,b;
	cin>>a>>b;
	fRand(a,b);
}
