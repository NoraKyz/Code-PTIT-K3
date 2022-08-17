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
ll a[1000001];
vector<ll> v;
bitset<(ll)1e3+1> nt;

void Sieve(ll n)
{
	nt.set(2);
	v.pb(2);
	FOR(i,3,n,2) nt.set(i);
	
	FOR(i,3,n,2)
	{
		if(nt[i]) 
		{
			v.pb(i);
			FOR(j,i*3,n,i*2) nt.reset(j);
		}
	}
}


int main()
{   
    
    cin >> t;
    while(t--)
	{
		ll res = 1e9;
		cin >> n;
		FOR(i,1,n,1) cin >> a[i];

		sort(a+1,a+1+n);
		FOR(i,1,n-1,1) res = min(res, a[i+1] - a[i]);

		cout << res << '\n';
	}
    
	return 0;
}
