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

ll t, x, y, p;
ll ModulePow(ll x, ll y, ll p)
{
    if(y == 0) return 1;
    ll res = ModulePow(x, y/2, p);
    if(y%2 == 0) return res*res%p;
    else return (res*res%p)*x%p;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> p;
        cout << ModulePow(x,y,p) << '\n';
    }
    
    
	return 0;
}
 