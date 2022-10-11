#include<bits/stdc++.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll MOD=1e9+7;

ll t;
string s;
ll dp[1000001] = {0}, dpi[1000001] = {0};

ll Solve(string s)
{	
	// dp[i] = min of number change
	// dp[0] = 0
	
	// s[i] = 'A' -> dp[i] = dp[i-1]
	// s[i] = 'B' -> if(s[i-1] = 'B') dp[i] = dp[i-1] 
	//                 (s[i-1] = 'A') dp[i] = min (dp[i-1] + 1, dpi[i-1] + 1);
	
	ll n = s.size()-1;
	
	if(s[0] == 'B') dp[0] = 1;
    else dpi[0] = 1;
	
	FOR(i,1,n,1) 
	{
		if(s[i] == 'A') 
		{
            dp[i] = dp[i-1];        
            dpi[i] = min(dpi[i-1] + 1, dp[i] + 1);
            
		}
		else // s[i] = 'B'
		{
			dpi[i] = dpi[i-1];        
            dp[i] = min(dp[i-1] + 1, dpi[i] + 1);
		}
		
		//cout << dp[i] << " ";
	}
	
	return dp[n];
}

int main()
{   
	//cin >> t;
	//while(t--)
	{
		cin >> s;
		
		cout << Solve(s);			
	}
    
	return 0;
}
