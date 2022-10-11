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

ll t, n, res = -1e9;
ll a[405][405], dp[405][405] = {0}, dpi[405][405];

int main()
{   
    cin >> n;

    FOR(i,1,n,1) FOR(j,1,n,1) cin >> a[i][j];

    FOR(i,1,n,1) 
    {
        FOR(j,1,n,1) 
        {
            FOR(i,1,k,1) 
            {
                f[i][j][k] = 
            }
        }
    }
    
    
	return 0;
}
 