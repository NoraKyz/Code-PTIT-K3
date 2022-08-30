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

ll t, n;
ll a[1001] = {0};

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = -1e9;
        cin >> n;
        FOR(i,1,n,1) 
        {
            cin >> a[i]; 
            res = max(a[i], res);
        }   
        
        FOR(i,1,n,1)
        {
            ll tmp = a[i];
            FOR(j,i+1,n,1) 
            {
                tmp *= a[j];
                res = max(res, tmp);
            } 
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 