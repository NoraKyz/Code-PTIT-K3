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

ll t, n, m, res = 0;
pair<ll,ll> x[] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
bool a[105][105] = {0}, kt[105][105];

void DFS(ll i, ll j)
{
    FOR(h,0,7,1)
    {
        ll c = i + x[h].first, d = j + x[h].second;

        if(c <= n && d <= m && c >= 1 && d >= 1)
        {
            if(a[c][d])
            {
                a[c][d] = 0;
                DFS(c,d);
            }         
        }
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        res = 0;
        cin >> n >> m;
        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) 
            {
                cin >> a[i][j];
            }
        }

        FOR(i,1,n,1)
        {
            FOR(j,1,m,1) if(a[i][j]) 
            {
                res++;
                DFS(i,j);
            }
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 