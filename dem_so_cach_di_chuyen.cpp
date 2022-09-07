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

ll t, n, k, res = 0;
pair<ll,ll> x[] = {{1,0}, {0,1}};
ll sum[25][25] = {0}, a[25][25];

void DFS(ll i, ll j)
{
    FOR(k,0,1,1)
    {
        if(i + x[k].first <= n && j + x[k].second <= n)
        {
            i += x[k].first;
            j += x[k].second;
            cout << i << " " << j << '\n';
            sum[i][j] = sum[i-x[k].first][j-x[k].second] + a[i][j];
            if(i == n && j == n)
            {
                if(sum[i][j] == k) res++;
            }
            else if (i < n || j < n) DFS(i,j);          
        }
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        res = 0;
        cin >> n >> k;
        FOR(i,1,n,1) 
        {
            FOR(j,1,n,1) 
            {
                cin >> a[i][j];
                sum[i][j] = 0;
            }
        }

        sum[1][1] = a[1][1];
        DFS(1,1);
        cout << res << '\n';
    }
    
    
	return 0;
}
 