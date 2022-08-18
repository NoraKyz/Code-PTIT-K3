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

ll n;
unordered_map<ll,ll> m;

int main()
{   
    
    cin >> n;
    FOR(i,1,n,1) 
    {
        ll x;
        cin >> x;
        m[x]++;
    }

    FOR(i,0,10000,1) if(m[i] > 0) cout << i << " ";
    
	return 0;
}
 