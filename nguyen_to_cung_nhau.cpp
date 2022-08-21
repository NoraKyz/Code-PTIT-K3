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

ll Prime(ll n)
{
    if(n < 2) return 0;
    FOR(i,2,sqrt(n),1) if(n%i == 0) return 0;
    return 1; 
}

ll Check(ll n)
{
    ll res = 0;
    FOR(i,1,n,1) res += (__gcd(i,n) == 1);
    return Prime(res);
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << Check(n) << '\n';
    }
    
    
	return 0;
}
 