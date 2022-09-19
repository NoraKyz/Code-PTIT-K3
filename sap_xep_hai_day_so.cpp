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

ll t, n, m, x;
ll a1[1000001];

int main()
{   
    cin >> t;
    while(t--)
    {
        unordered_map<ll,ll> mp;

        cin >> n >> m;
        FOR(i,1,n,1) 
        {
            cin >> a1[i];
            mp[a1[i]]++;
        }
        
        FOR(i,1,m,1) 
        {
            cin >> x;
            ll tmp = mp[x];
            while(tmp--) cout << x << " ";
            mp[x] = 0;
        }


        sort(a1+1,a1+1+n);

        FOR(i,1,n,1) if(mp[a1[i]] > 0) cout << a1[i] << " ";

        cout << '\n';

    }
    
    
	return 0;
}
 