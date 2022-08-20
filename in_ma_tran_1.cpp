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
ll a[200][200];

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
		cin >> n;
        FOR(i,1,n,1) 
        {
            FOR(j,1,n,1) cin >> a[i][j];
        }

        bool k = 0;
        FOR(i,1,n,1) 
        {
            if(k == 0) 
            {
                FOR(j,1,n,1) cout << a[i][j] << " ";
            }
            else
            {
                FORD(j,n,1,1) cout << a[i][j] << " ";
            }

            k = !k;
        }

        cout << '\n';
	}
    
	return 0;
}
 