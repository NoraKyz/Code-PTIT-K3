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

int main()
{   
    cin >> t;
    while(t--)
    {     
        cin >> n;
        ll a[105], dp1[105] = {0}, dp2[105] = {0}, res = 0;

        FOR(i,1,n,1) cin >> a[i];

        FOR(i,1,n,1) 
        {
            dp1[i] = 1;
            FORD(j,i,1,1) if(a[i] > a[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
            //cout << dp1[i] << '\n';
        }

        FORD(i,n,1,1) 
        {
            dp2[i] = 1;
            FOR(j,i,n,1) if(a[i] > a[j]) dp2[i] = max(dp2[i], dp2[j] + 1);
            //cout << dp2[i] << '\n';
        }



        FOR(i,1,n,1) res = max(res, dp1[i] + dp2[i] - 1);

        cout << res << '\n';
    }
    
    
	return 0;
}
 