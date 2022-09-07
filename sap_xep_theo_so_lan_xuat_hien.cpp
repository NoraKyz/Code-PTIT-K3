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

ll t, n, x;

bool ss(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.se != b.se) return a.se > b.se;
    return a.fi < b.fi;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        unordered_map<ll,ll> m;
        FOR(i,1,n,1) 
        {
            cin >> x;
            m[x]++;
        }

        vector<pair<ll,ll>> v(all(m));
        sort(all(v),ss);

        for(auto it : v)
        {
            ll lim = it.second;
            FOR(i,1,lim,1) cout << it.first << " ";
        }

        cout << '\n';
        
    }
    
    
	return 0;
}
 