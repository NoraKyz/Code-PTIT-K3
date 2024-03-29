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
ll a[350][350], k[4][4];

ll Solve(ll n, ll m, ll matrix[350][350], ll kernel[4][4])
{
    ll res = 0;

    FOR(i,1,n-2,1) 
    {
        FOR(j,1,m-2,1) 
        {
            ll sum = 0;
            FOR(h,1,3,1) 
            {
                FOR(k,1,3,1)
                {
                    sum += matrix[i+h-1][j+k-1]*kernel[h][k];
                }
            }
            res+= sum;
        }
    }

    return res;
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

        FOR(i,1,3,1) 
        {
            FOR(j,1,3,1) cin >> k[i][j];
        }

        cout << Solve(n,m,a,k) << '\n';
    }
    
    
	return 0;
}
 