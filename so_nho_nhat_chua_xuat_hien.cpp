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
unordered_map<ll,ll> m;

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
		cin >> n;
		FOR(i,1,n,1) 
		{
			cin >> a[i];
			m[a[i]] = 1;
		}

		
		FOR(i,1,1e6,1) if(m[i] == 0) 
		{
			cout << i << '\n';
			break;
		} 

		m.clear();

	}
    
	return 0;
}
