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
ll a[10000];

ll Logic()
{
    ll res = -1;
    FOR(i,1,n,1)
    {
        FOR(j,i+1,n,1) 
        {
            res = max(a[j] - a[i], res);
        }
    }

    if(res <= 0) return -1;
    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) cin >> a[i];
        cout << Logic() << '\n';
    }
    
    
	return 0;
}
 