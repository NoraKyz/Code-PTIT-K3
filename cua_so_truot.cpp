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
ll a[105][105], b[15][15], res[105][105] = {0};
    
int main()
{   
    fast_cin
    cin >> n;
    FOR(i,1,n,1) FOR(j,1,n,1) cin >> a[i][j];
    cin >> m;
    FOR(i,1,m,1) FOR(j,1,m,1) cin >> b[i][j];

    FOR(i,1,n,m)
    {
        FOR(j,1,n,m) 
        {
            FOR(k,1,m,1) 
            {
                FOR(h,1,m,1) 
                {
                    res[i+k-1][j+h-1] = a[i+k-1][j+h-1] * b[k][h];
                    //cout << i+k-1 << "," << j+h-1 << " ";
                }
            }
        }
    }

    FOR(i,1,n,1)
    {
        FOR(j,1,n,1) cout << res[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}   