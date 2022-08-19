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
unordered_map<ll,ll> m;

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
        ll res = -1;
		cin >> n;      
        FOR(i,1,n,1) 
        {
            cin >> x;     
            m[x]++;      
            if(m[x] >= 2 && res == -1) res = x;   
            
        }

        cout << res << '\n';
        m.clear();
	}
    
	return 0;
}
 