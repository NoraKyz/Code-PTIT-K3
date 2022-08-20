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
ll Logic(ll n)
{
    ll res = 0;
    FOR(i,1,sqrt(n),1) 
    {
        if(n%i == 0) 
        {
            if(i%2 == 0) res++;
            if((n/i)%2 == 0 && i*i != n) res++;
        }
    }

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << Logic(n) << '\n';
    }
    
    
	return 0;
}
 