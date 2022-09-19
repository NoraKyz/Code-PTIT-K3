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

ll t, n, m;

string Solve(ll n, ll m)
{
    // s1 + s2 = (n+1)*n/2 & s1 - s2 = m
    ll sum = (n+1)*n/2;

    sum -= m;
    if(sum%2) return "No";
    else 
    {
        ll s2 = sum/2;
        ll s1 = m + s2;

        ll x = __gcd(s1,s2);
        if(x == 1) return "Yes";
        return "No";
    } 
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
    }
    
    
	return 0;
}
 