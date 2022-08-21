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

ll t, x , y, z, n;

ll Logic(ll x, ll y, ll z, ll n)
{
    ll res = x*y / __gcd(x, y);
    res = res*z / __gcd(res, z);
    if((int) log10(res) + 1 > n) return -1;

    ll i = 0;
    while(1) 
    {
        i+=res;
        if((int) log10(i) + 1 == n) return i;
    }
    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z >> n;
        cout << Logic(x,y,z,n) << '\n';
    }
    
    
	return 0;
}
 