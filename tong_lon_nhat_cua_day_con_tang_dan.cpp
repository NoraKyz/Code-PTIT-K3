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
ll a[1005];

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll dp[n+1] = {0}, res = 0;

        FOR(i,1,n,1) 
        {
            cin >> a[i];
            dp[i] = a[i];
        }

        FOR(i,1,n,1) 
        {
            FORD(j,i-1,1,1) 
            {
                if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }

        cout << *max_element(dp+1,dp+1+n) << '\n';

    }
    
    
	return 0;
}
 