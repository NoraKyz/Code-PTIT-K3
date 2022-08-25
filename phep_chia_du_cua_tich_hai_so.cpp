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

ll t, n, a, b, c;
ll ModuleMul(ll a, ll b)
{
    if(b == 0) return 0;
    
    ll res = ModuleMul(a,b/2) % c;
    if(b%2) return (res % c + res % c + a % c) % c;
    return (res % c + res % c) % c;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        cout << ModuleMul(a,b) << '\n';
    }
    
    
	return 0;
}
 