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

ll t, n, c = 0;
ll a[5000] = {0};

int main()
{   
       deque<pair<ll,ll>> d = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        ll res[50][50] = {0};

        cin >> n;
        FOR(i,1,n,1)
        {
            FOR(j,1,n,1) 
            {
                cin >> a[++c];
                res[i][j] = 1e9;
            }
        }
        sort(a+1,a+1+c);

        ll i = 1, j = 1;
        FOR(k,1,n*n,1)
        {
            res[i][j] = a[k];

            if(i + d.front().first <= n && i + d.front().first >= 1 && j + d.front().second <= n && j + d.front().second >= 1 && res[i + d.front().first][j + d.front().second] == 1e9)
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

     

    FOR(i,1,n,1)
    {
        FOR(j,1,n,1) 
        {
            cout << res[i][j] << " ";
        }
        cout << '\n';
    }   
    
	return 0;
}
 