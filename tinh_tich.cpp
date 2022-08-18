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

ll t, n, m, x;

int main()
{   
    
    cin >> t;
    while(t--)
	{
		ll ma = -1e9, mb = 1e9;
		cin >> n >> m;
		FOR(i,1,n,1)
		{
			cin >> x;
			ma = max(ma, x);
		}
		FOR(i,1,m,1) 
		{
			cin >> x;
			mb = min(mb, x);
		}

		cout << ma * mb << '\n';
	}
    
	return 0;
}
