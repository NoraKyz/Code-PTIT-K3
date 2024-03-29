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
ll a[100001] = {0};
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) cin >> a[i];

        ll res = 0, l = 1, r = n;

        while(l < r) 
        {
            if(a[l] < a[r]) 
            {
                l++;
                a[l] += a[l-1];
                res++;
            }
            else if(a[l] > a[r])
            {
                r--;
                a[r] += a[r+1];
                res++; 
            }
            else 
            {
                l++;
                r--;
            }
        }

        cout << res << '\n';
    }
    
    return 0;
}