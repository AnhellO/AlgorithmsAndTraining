#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

typedef unsigned long long ull;

vector<ull> v;
vector<ull> w;

#define NMAX 31
#define WMAX 101

ull n,t,g,ans,np,dp[NMAX][WMAX];

ull backtrack(int item_k,int weight_a)
{	if(item_k == n || weight_a == 0) return 0;
	if(dp[item_k][weight_a] != -1) return dp[item_k][weight_a];
	if(w[item_k] > weight_a) return dp[item_k][weight_a] = backtrack(item_k+1,weight_a);
	else
	 return dp[item_k][weight_a] = max(backtrack(item_k+1,weight_a),v[item_k]+backtrack(item_k+1,weight_a-w[item_k]));
}

int main()
{	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> t;

	while(t--)
	{	cin >> n;
		v.resize(n);
		w.resize(n);
		memset(dp,-1,sizeof(dp));

		for(int i=0;i<n;i++)
			cin >> v[i] >> w[i];

		ans = 0;

		cin >> np;

		while(np--)
		{	cin >> g;
			ans += backtrack(0,g);
		}

		cout << ans << '\n';
	}

	return 0;
}
