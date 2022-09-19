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
ll a[100001];

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = 0, gcd;
        cin >> n;
        FOR(i,1,n,1) cin >> a[i];

        if(n > 1) 
        {           
            gcd = abs(a[1]-a[2]);
            FOR(i,2,n-1,1) if(a[i] > 0 && a[i-1] > 0) gcd = __gcd(gcd, abs(a[i]-a[i+1]));

            FOR(i,1,sqrt(gcd),1) if(gcd%i == 0) res+=2;

            ll h = sqrt(gcd);
            if(h*h == gcd) res--;
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 