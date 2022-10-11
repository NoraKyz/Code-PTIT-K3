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

ll t, n, r, b, g;
ll f[50][50] = {0};

ll nCr(ll a, ll b)
{
    if(b == 0 || a == b) return 1;

    if(f[a-1][b-1] == 0) f[a-1][b-1] = nCr(a-1,b-1);
    if(f[a-1][b] == 0) f[a-1][b] = nCr(a-1,b);

    return f[a-1][b-1] + f[a-1][b];
}

ll F(ll n)
{
    ll res = 1;
    FOR(i,1,n,1) res*=i;

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = 0;
        cin >> n >> r >> b >> g;

        FOR(i,r,n,1) 
        {
            FOR(j,b,n-i,1) 
            {
                ll k = n-i-j;  
                if(i+j+k == n && k >= g)
                {
                    res += F(n) / F(i) / F(j) / F(k);    
                    //cout <<  F(i+j+k) / F(i) / F(j) / F(k)  << '\n';  
                }                  
            }
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 