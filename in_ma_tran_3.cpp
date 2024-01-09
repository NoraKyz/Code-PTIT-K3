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
ll a[105][105];

void Solve() 
{
    ll cnt = m*n;

    deque<pair<ll,ll>> d = {{-1,1},{1,-1}};

    ll i = 1, j = 1;

    while(cnt--)
    {
        cout << a[i][j] << " ";

        if(i + d.front().first >= 1 && i + d.front().first <= n && j + d.front().second >= 1 && j + d.front().second <= m) 
        {
            i += d.front().first;
            j += d.front().second;
        }
        else 
        {
            if(d.front().first == -1)
            {
                if(j + 1 <= m) j++;
                else i++;
            }
            else 
            {
                if(i + 1 <= n) i++;
                else j++;
            }

            d.push_front(d.back());
            d.pop_back();
        }
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
            FOR(j,1,m,1) cin >> a[i][j];
        }

        Solve();

        cout << '\n';
    }
    
    
	return 0;
}
 