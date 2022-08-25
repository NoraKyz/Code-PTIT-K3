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

ll t, n, k;

int main()
{   
    cin >> t;
    while(t--)
    {
        vector<ll> v;      

        cin >> n >> k;
        FOR(i,1,n,1) 
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        sort(all(v));

        ll res = 0;
        FOR(i,0,n-1,1)
        {
            ll tmp = lower_bound(all(v),v[i]+k) - v.begin();                     
            res+=tmp - i - 1;          
        }

        cout << res << '\n';     
    }
    
    
	return 0;
}
 