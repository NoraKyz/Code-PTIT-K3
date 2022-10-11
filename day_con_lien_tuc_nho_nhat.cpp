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

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        ll a[n+1];
        FOR(i,1,n,1) cin >> a[i];

        ll l = 1, r = 1, sum = a[1], res = 1e9;

        while(1)
        {
            if(sum <= x) 
            {
                if(r < n) 
                {
                    r++;
                    sum += a[r];
                }
                else if(l < r)
                {
                    sum -= a[l];
                    l++;
                }
                else break;
        
            }
            else
            {
                if(l < r) 
                {
                    sum -= a[l];
                    l++;
                }
                else if(r < n) 
                {
                    r++;
                    sum += a[r];
                }
                else break;
            }

            

            if(sum > x) 
            {
                res = min(res, r-l+1);
            }
        } 

        if(res == 1e9) cout << -1 << '\n';
        else cout << res << '\n';
    }
    
    
	return 0;
}
 