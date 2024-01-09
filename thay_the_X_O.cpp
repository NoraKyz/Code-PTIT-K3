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
ll x[] = {-1,1,0,0};
ll y[] = {0,0,1,-1};
char a[50][50];
bool kt, done[50][50];

void Loading(ll u, ll v, bool xet) 
{
    FOR(i,0,3,1) 
    {
        ll c = u + x[i], d = v + y[i];

        if(c < 1 || c > n || d < 1 || d > m) kt = 1;
        else 
        {
           if(a[c][d] == 'O' && done[c][d] == 0) 
           {
                done[c][d] = 1;
                Loading(c, d, xet);
                done[c][d] = 0;             
           }
        }
    }

    if(xet) a[u][v] = '1';
}
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> n >> m;

        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) 
            {
                cin >> a[i][j];
                done[i][j] = 0;
            }
        }

        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) 
            {
                if(a[i][j] == 'O' && done[i][j] == 0)  
                {
                    done[i][j] = 1;
                    kt = 0;
                    Loading(i,j,0);
                    if(kt) Loading(i,j,1);
                }
            }
        }

        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) 
            {
                if(a[i][j] == '1') cout << 'O' << " ";
                else cout << 'X' << " "; 
            }
            cout << '\n';
        }
    }
    
    return 0;
}