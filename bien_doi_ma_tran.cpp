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

    ll t, n;
        
    int main()
    {   
        fast_cin
        cin >> t;
        while(t--)
        {
            cin >> n;

            ll m = 0, res = 0;
            ll a[n+1][n+1] = {0}, r[n+1] = {0}, c[n+1] = {0};

            FOR(i,1,n,1) FOR(j,1,n,1) 
            {
                cin >> a[i][j];
                c[j] += a[i][j];
                r[i] += a[i][j];
                m = max(m, max(c[j],r[i]));
            }

            FOR(i,1,n,1) 
            {
                FOR(j,1,n,1) 
                {
                    if(r[i] < m && c[j] < m)
                    {
                        ll cnt = min(m-r[i], m-c[j]);
                        r[i] += cnt;
                        c[j] += cnt;
                        res += cnt;
                    }
                }
            }

            cout << res << '\n';
        }
        
        return 0;
    }