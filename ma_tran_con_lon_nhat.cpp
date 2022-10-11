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

int main()
{   
    cin >> t;
    while(t--)
    {   
        ll res = 0;
        cin >> n >> m;
        ll a[n+5][m+5] = {0};

        FOR(i,1,n,1)
        {
            FOR(j,1,m,1) cin >> a[i][j];
        } 
        
        // hàng, cột dài nhất chứa 1 kết thúc tại ô (i,j)
        ll hoz[n+5][m+5], ver[n+5][m+5];
        
        hoz[1][1] = ver[1][1] = a[1][1];

        FOR(i,1,n,1)
        {
            FOR(j,1,m,1)
            {
            
                if(a[i][j] == 0) hoz[i][j] = ver[i][j] = 0;
                else
                {
                    hoz[i][j] = (j == 1) ? 1 : hoz[i][j-1] +1;
                    ver[i][j] = (i == 1) ? 1 : ver[i-1][j] + 1;
                }
            }
        }

        FORD(i,n,1,1)
        {
            FORD(j,m,1,1)
            {
                ll small = min(hoz[i][j],ver[i][j]) + 1, cnt = 0;
                while(small--)
                {
                    if(small == 0) break;
                    if(ver[i][j - small + 1] >= small&& hoz[i - small + 1][j] >= small) cnt = max(cnt, small);
                    else cnt = 0;
                }

                res = max(res, cnt);
            }
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 