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

ll t, n, k;

int main()
{   
    cin >> t;
    while(t--)
    {  
        cin >> n >> k;
        ll a[n+1];
        multiset<ll> ms;
        FOR(i,1,n,1) cin >> a[i];

        FOR(i,1,k,1) ms.insert(a[i]);
        FOR(i,k+1,n,1) 
        {
            cout << *ms.rbegin() << " ";
            ms.erase(ms.find(a[i-k]));
            ms.insert(a[i]);
        }

        cout << *ms.rbegin() << '\n';
    }
    
    
	return 0;
}
 