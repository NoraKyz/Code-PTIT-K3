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

ll t, n, m, l;
ll a[505][505];

void Solve(ll n, ll m, ll l, ll matrix[505][505])
{
    ll cot[m+1][n+1] = {0};

    FOR(i,1,m,1) 
    {
        FOR(j,1,n,1) cot[i][j] = cot[i][j-1] + a[j][i];
    }

    FOR(i,1,n-l+1,1) 
    {
        FOR(j,1,m-l+1,1) 
        {
            ll sum = 0;
            FOR(h,1,l,1) 
            {
                sum += cot[j+h-1][i+l-1] - cot[j+h-1][i-1];
            }
            cout << sum / (l*l) << " ";
        }

        cout << '\n';
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> l;
        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) cin >> a[i][j];
        }

        Solve(n,m,l,a);
    }
    
    
	return 0;
}
 