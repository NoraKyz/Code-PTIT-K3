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

ll t, m, n, a, b;

ll Count(ll m, ll n, ll a)
{
    m = (m/a) + (m%a != 0);
    n = n/a;

    return n-m+1;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> a >> b;
        cout << Count(m,n,a) + Count(m,n,b) - Count(m,n,a*b/__gcd(a,b)) << '\n';
    }
    
    
	return 0;
}
 