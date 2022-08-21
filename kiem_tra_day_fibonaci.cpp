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
ll f[100] = {0};
unordered_map<ll,bool> m;

int main()
{   
    m[0] = 1;
    m[1] = 1;

    f[1] = 1; 
    FOR(i,2,93,1) 
    {
        f[i] = f[i-1] + f[i-2];
        m[f[i]] = 1;
    }

    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) 
        {
            cin >> x;
            if(m[x]) cout << x << " "; 
        }

        cout << '\n';
    }
    
    
	return 0;
}
 