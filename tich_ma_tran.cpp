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

ll n, m, p;
ll a[60][60], b[60][60], c[60][60] = {0};

int main()
{   
    cin >> n >> m >> p;

    FOR(i,1,n,1) 
    {
        FOR(j,1,m,1) cin >> a[i][j];
    }
    FOR(i,1,m,1) 
    {
        FOR(j,1,p,1) cin >> b[i][j];
    }

    FOR(i,1,n,1) 
    {
        FOR(j,1,p,1)       
        {           
            {
                FOR(k,1,m,1) c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    FOR(i,1,n,1) 
    {
        FOR(j,1,p,1) cout << c[i][j] << " ";
        cout << '\n';
    }

    
	return 0;
}
 