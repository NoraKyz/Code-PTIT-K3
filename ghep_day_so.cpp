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

ll t, n, k, x;
vector<ll> v;

int main()
{   
    
    cin >> t;
    while(t--)
	{
		cin >> k >> n;
		FOR(i,1,k*n,1) 
		{
			cin >> x;
			v.pb(x);
		}

		sort(all(v));
		for(auto x : v) cout << x << " ";
		cout << '\n';

		v.clear();
	}
    
	return 0;
}
