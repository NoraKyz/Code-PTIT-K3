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

ll t, n, m;
deque<pair<ll,ll>> d = {{0,1}, {1,0}, {0,-1}, {-1,0}};
ll a[150][150] = {0};

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res[150][150] = {0};
        cin >> n >> m;
        FOR(i,1,n,1)
        {
            FOR(j,1,m,1) cin >> a[i][j];
        }

        ll i = 1, j = 1;
        FOR(k,1,n*m,1)
        {
            res[i][j] = a[i][j];
            cout << a[i][j] << " ";
            if(i + d.front().first <= n && i + d.front().first >= 1 && j + d.front().second <= m && j + d.front().second >= 1 && res[i + d.front().first][j + d.front().second] == 0)
            {
                i += d.front().first;
                j += d.front().second;
            }
            else 
            {
                d.push_back(d.front());
                d.pop_front();
                i += d.front().first;
                j += d.front().second;
            }
        }

        cout << '\n';
    }    
    
	return 0;
}
 