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

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
        ll res1 = 1e9, res2 = 1e9;
		cin >> n;
        FOR(i,1,n,1) 
        {
            cin >> a[i];
            res1 = min(res1, a[i]);
        } 

        FOR(i,1,n,1) 
        {
            if(a[i] != res1) 
            {
                res2 = min(res2, a[i]);
            }
        }

        if(res2 == 1e9) cout << -1;
        else cout << res1 << " " << res2 << '\n';
	}
    
	return 0;
}
 