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
ll check(string s)
{
    ll res = s.size();
    unordered_map<char,ll> m;

    for(auto x : s) m[x]++;
    for(auto x : m) res += x.second * (x.second-1) / 2;

    return res;
}

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
		cin >> s;
        cout << check(s) << '\n';  
	}
    
	return 0;
}
 