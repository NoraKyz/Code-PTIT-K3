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

ll t, n, x;
unordered_map<ll,ll> m;

int main()
{   
    
    cin >> t;
    while(t--)
	{
		cin >> n;
		FOR(i,0,n-1,1) 
		{
			cin >> x;
			m[x]++;		
		}

		FOR(i,0,n-1,1) if(m[i]) cout << i << " "; else cout << -1 << " ";

		cout << '\n';

		m.clear();
	}
    
	return 0;
}
