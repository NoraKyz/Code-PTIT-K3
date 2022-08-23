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

ll t, n, k;
ll a[1000001];

int main()
{   
    cin >> t;
    while(t--)
    {
        ll low = 0, res, up = 0;
        cin >> n >> k;
        FOR(i,1,n,1) 
        {
            cin >> a[i];
            if(a[i] <= k) low++;
        }
        
        ll i = 1, j = i + low - 1;
        FOR(h,i,j,1) if(a[h] > k) up++;
        res = up;

        while(j < n) 
        {
            if(a[i] > k) up--;
            i++;
            j++;
            if(a[j] > k) up++;
            res = min(res, up);
        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 