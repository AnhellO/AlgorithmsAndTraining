#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n = 0,a,l,lp;
vector<int> array,track,gs,tracki;
vector<int>::iterator cp;

void prints(int i)
{ if(gs[i] != -1) prints(gs[i]);
  cout << array[i] << '\n';
}

int main() 
{   cin.tie(0);
	ios::sync_with_stdio(0);
	
	while(cin >> a) 
	  array.push_back(a),n++;
	 
    track.assign(n,0);
    gs.assign(n,0);
	tracki.assign(n,0);
	
	track[0] = array[0], tracki[0] = 0, l = 1, lp = 0, gs[0] = -1;
	
	for(int i=1;i<n;i++)
	{  cp = lower_bound(track.begin(),track.begin()+l,array[i],less<int>());
	   a = cp - track.begin();
	   track[a] = array[i];
	   
	   if(a+1 >= l) 
	   { l = a+1;
	     lp = i;
	   }
	   
	   cout << i << ' ' << a+1 << '\n';
	   
	   tracki[a] = i;
	   
	   if(a == 0) gs[i] = -1;
	   else gs[i] = tracki[a-1];
	   
	}
	
	cout << l << "\n-\n";
	
    prints(lp);
	
	return 0;
}