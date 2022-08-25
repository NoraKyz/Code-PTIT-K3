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
vector<ll> v;

bool CheckPrime(ll n)
{
    if(n < 2) return 0;
    FOR(i,2,sqrt(n),1) if(n%i == 0) return 0;
    return 1;
}

void Sieve()
{
    FOR(i,1,20,1)
    {
        ll res = pow(2,i);
        if(CheckPrime(res-1)) v.push_back(res/2 * (res-1));
    }
}

int main()
{   
    Sieve();

    cin >> t;
    while(t--)
    {
        cin >> n;
        if(binary_search(all(v),n)) cout << 1;
        else cout << 0;

        cout << '\n';
    }    
    
	return 0;
}
 