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
pair<ll,ll> a[1000001];

int main()
{
    	fast_cin 
	cin >> t;
	while(t--)
	{
		cin >> n;
		FOR(i,1,n,1) 
		{
			cin >> a[i].first;
			a[i].second = i;
		}

		ll l = n, r = 1;
		sort(a+1,a+1+n);
		FOR(i,1,n,1) 
		{
			if(i != a[i].second) 
			{
				l = min(l, a[i].second);
				r = max(r, a[i].second);
			}
		}

		cout << l << " " << r;
		cout << '\n';
		
	}
	
	return 0;
}
 