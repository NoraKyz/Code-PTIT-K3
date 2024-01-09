#include<bits/stdc++.h>
#include<string>
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
ll a1[1005], a2[1005];

/*
    Nếu sự khác biệt giữa các tổng tiền tố của hai mảng 
    trở nên giống nhau tại hai điểm, thì các mảng con 
    giữa hai điểm này có tổng bằng nhau.
*/

ll Solve(ll a1[], ll a2[], ll n)
{
    unordered_map<ll,ll> m;

    ll a[1005], res = 0, sum = 0;

    FOR(i,1,n,1) a[i] = a1[i] - a2[i];

    FOR(i,1,n,1) 
    {
        sum += a[i];

        if(sum == 0) res = i;

        if(m.find(sum) != m.end())
        {
            res = max(res, i - m[sum]);
        }
        else m[sum] = i;
    }

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) cin >> a1[i];
        FOR(i,1,n,1) cin >> a2[i];

        cout << Solve(a1,a2,n) << '\n';
    }
    
    
	return 0;
}
 