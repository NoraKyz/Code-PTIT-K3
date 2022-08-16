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
vector<ll> v;
bitset<(ll)1e6+1> nt;

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

ll Logic(ll n, ll k)
{
	ll numberPair = n / k;
	ll numberAnother = n % k;
	
	ll res = k * (k-1) / 2;
	return res * numberPair + (numberAnother + 1) * numberAnother / 2;
}

int main()
{   
    
    cin >> t;
    while(t--)
	{
		cin >> n >> k;
		cout << Logic(n,k) << '\n';
	}
    
	return 0;
}
