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
ll fa[10000] = {0}, fb[10000] = {0};

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = -1e9;

        cin >> n >> m;
        FOR(i,1,n,1) 
        {
            cin >> x;
            fa[i] = fa[i-1] + x;
        }
        res = max(res, fa[n]);

        FOR(i,1,m,1) 
        {
            cin >> x;
            fb[i] = fb[i-1] + x;
        }
        res = max(res, fb[m]);

        FOR(i,1,n,1) 
        {
            if(i >= m) break;
            else
            {
                res = max(res, fa[i] + fb[m] - fb[i]);
            }
        }

        FOR(i,1,n,1) 
        {
            if(i >= n) break;
            else
            {
                res = max(res, fb[i] + fa[n] - fa[i]);
            }
        }

        cout << res << '\n';

    }
    
    
	return 0;
}
 