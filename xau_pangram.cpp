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

ll t, k;
string s;

bool check(string s, ll k)
{
    ll a[200] = {0}, c = 0, du = 0;
    for(auto x : s) 
    {
        a[x] ++;
        if(a[x] > 1) du++;
    }
    
    FOR(i,'a','z',1) if(a[i] == 0) c++;

    if(c > k || du < c) return 0;
    return 1;
}

int main()
{   
    
    cin >> t;

    while(t--)
	{
		cin >> s >> k;
        cout << check(s, k) << '\n';     
	}
    
	return 0;
}
 