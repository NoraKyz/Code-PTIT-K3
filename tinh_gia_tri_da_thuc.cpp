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

ll t, n, x, a;
ll ModulePow(ll x, ll y)
{
    if (y == 0)
        return 1;
    ll res = ModulePow(x, y/2);
    if (y % 2 == 0)
        return res * res % MOD;
    else
        return (res * res % MOD) * x % MOD;
}

int main()
{
    cin >> t;
    while (t--)
    {
        ll res = 0;
        cin >> n >> x;
        FORD(i,n-1,0,1) 
        {
            cin >> a;
            res += ((a%MOD) * ModulePow(x,i))%MOD;
        }

        cout << res << '\n';
    }

    return 0;
}
