#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//finds the products between the elements of two bidimensional arrays, puts them inside another
	double a[5][5]={0},b[5][5]={0},c[5][5]={};
	int n = 5;
	cout<<fixed<<setprecision(2);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			a[i][j]=2.0;
			b[i][j]=2.0;
			c[i][j]=a[i][j]*b[i][j];		
		}
	for(int q=0;q<n;q++)
		for(int w=0;w<n;w++)
		{
			cout<<c[q][w]<<endl;
		}
}
