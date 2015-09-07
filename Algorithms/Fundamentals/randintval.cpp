#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;
//finds a random integer number from 0 to n
static int randIntVal(int n)
{
	srand(time(0));
	int x = rand() % n;
	cout<<x<<endl;
}
int main()
{
	int n;
	cin>>n;
	randIntVal(n);
}
