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

ll t, n, l, r;
ll a[100001] = {0};

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        FOR(i,0,n-1,1) cin >> a[i];
        cin >> l >> r;

        while (a[l] <= a[l+1] && l < r) l++;            
        while (a[r] <= a[r-1] && l < r) r--;

        if(l != r) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
}
