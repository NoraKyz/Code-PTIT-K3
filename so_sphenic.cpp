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
ll f[10005] = {0};

void Sieve()
{
    f[1] = 1;
    FOR(i,2,10000,2) f[i] = 2;

    FOR(i,3,10000,2) 
    {
        if(f[i] == 0) 
        {
            f[i] = i;
            FOR(j,i*3,10000,i*2) if(f[j] == 0) f[j] = i;
        }
    }
}

bool Check(ll n)
{
    unordered_map<ll,ll> m;

    ll res = 0;
    while(n != 1)
    {
        m[f[n]]++;
        n /= f[n];
        res++;
    }

    return (res == 3 && m.size() == 3);
}

int main()
{   
    Sieve();
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << Check(n) << '\n';
    }
    
    
	return 0;
}
 