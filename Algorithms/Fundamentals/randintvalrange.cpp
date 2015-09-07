#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;
//finds a random integer number within a given range from a to b
static int randIntVal(int a, int b)
{
	srand(time(0));
	int x = rand() % (a-b)+b;
	cout<<x<<endl;
}
int main()
{
	int x,y;
	cin>>x>>y;
	randIntVal(x,y);
}
