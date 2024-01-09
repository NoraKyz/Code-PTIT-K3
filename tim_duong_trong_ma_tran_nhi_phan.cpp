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

ll a[1001][1001];
ll n, m, x11, y11, x2, y2;
ll cnt[1001][1001];
ll dx[4] ={-1, 0, 1, 0};
ll dy[4] ={0, -1, 0, 1};
 
void inp()
{
	cin >> n >> m >> x11 >> y11 >> x2 >> y2;
	FOR(i,0,n-1,1)
        FOR(j,0,m-1,1) cin >> a[i][j];
	memset(cnt, 0, sizeof(cnt));
}
 
void bfs(ll i, ll j)
{
	a[i][j] = 0;
	queue<pair<ll,ll>> q;
	q.push({i, j});

	while(!q.empty())
    {
		pair<ll,ll> top = q.front(); q.pop();
		ll i = top.first, j = top.second;
		FOR(k,0,3,1)
        {
			ll i1 = i +dx[k];
			ll j1 = j +dy[k];
			if(a[i1][j1] && i1 >=0 && i1 < n && j1 >=0 && j1 < m )
            {
				q.push({i1, j1});
				a[i1][j1] = 0;
				cnt[i1][j1] = cnt[i][j]+1;
				if(i1 == x2 && j1 == y2) return;
			}
		}
	}
}
    
int main()
{   

    fast_cin
    ll t; 
    cin >> t;
	while(t--)
    {
		inp();

		if(a[x11][y11] && a[x2][y2])
        {
			bfs(x11, y11);
		}
		if(cnt[x2][y2])
        {
			cout << cnt[x2][y2] << endl;
		}
		else cout << "-1\n";
	}
    
    return 0;
}