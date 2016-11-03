#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n,**tab,ans = -127*100*100,sum;
	
	cin >> n;
	
	tab = (int**)malloc(n*sizeof(int*));
	
	for(int i=0;i<n;i++)
	{ 	 tab[i] = (int*)malloc(n*sizeof(int)); 
		
		 for(int j=0;j<n;j++)
		 {	cin >> tab[i][j];
			
			if(i>0)			tab[i][j] += tab[i-1][j]; 
			if(j>0) 		tab[i][j] += tab[i][j-1];
			if(i>0 && j>0)	tab[i][j] -= tab[i-1][j-1];
		 }
	}
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=i;k<n;k++)
				for(int l=j;l<n;l++)
				{	sum = tab[k][l];
					
					if(i>0)			sum -= tab[i-1][l];
					if(j>0)			sum -= tab[k][j-1];
					if(i>0 && j>0)	sum += tab[i-1][j-1];
					
					ans = max(ans,sum);
				}
			
	cout << ans << '\n';	
	
	return 0;
}