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



ll Solve(string s)
{			
	ll a[500] = {0}, res = 1e9;
	
	for(auto x : s) a[x]++;
	
	ll i = 0, n = s.size()-1, j = n;
	
	while(a[s[j]]-1 >= 1) 
	{
		a[s[j]]--;
		j--;
	}
	
	//cout << j;
	
	res = j-i+1;
	
	while(i <= n) 
	{
		if(a[s[i]]-1 >= 1) 
		{
			a[s[i]]--;
			i++;
		}
		else if(j < n)
		{
			j++;
			a[s[j]]++;
		}
		else break;
		
		res = min(res, j-i+1);
	}
	
	return res;
}

int main()
{   
	cin >> t;
	while(t--)
	{
		cin >> s;
		
		cout << Solve(s) << '\n';			
	}
    
	return 0;
}
