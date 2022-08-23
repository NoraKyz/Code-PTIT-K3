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
ll a[150][150], res[150][150] = {0};

void Search(ll &i, ll &j)
{
    FOR(h,1,n,1) 
    {
        FOR(k,1,m,1) if(a[h][k] != 1e9) 
        {
            i = h;
            j = k;
            return;
        }
    }

    i = -1;
    j = -1;
    return;
}

void XoanOc(ll &i, ll &j)
{
    deque<pair<ll,ll>> d = {{0,1}, {1,0}, {0,-1}, {-1,0}};

    while(a[i][j] != 1e9)
    {
        ll tmp = a[i][j];
        a[i][j] = 1e9;
        
        if(i + d.front().first <= n 
            && i + d.front().first >= 1 
            && j + d.front().second <= m 
            && j + d.front().second >= 1 
            && res[i + d.front().first][j + d.front().second] == 1e9)
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

        if(res[i][j] == 1e9) res[i][j] = tmp;
        else res[i - d.front().first][j - d.front().second] = tmp;
    }

}

int main()
{   
    cin >> t;
    while(t--)
    {            
        cin >> n >> m;
        FOR(i,1,n,1)
        {
            FOR(j,1,m,1) 
            {
                cin >> a[i][j];
                res[i][j] = 1e9;
            }
        }

        ll i = 1, j = 1;      

        while(i != -1)
        {
            XoanOc(i,j);
            Search(i,j);
        }

        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) cout << res[i][j] << " ";         
        }

        cout << '\n';

    }
    
    
	return 0;
}
 