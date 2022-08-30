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

ll n;
struct Time
{
    ll a, b, c;
};

bool ss(Time a, Time b)
{
    return (a.a < b.a || (a.a == b.a && a.b < b.b) || (a.a == b.a && a.b == b.b && a.c < b.c));
}

Time a[10000];

int main()
{   
    cin >> n;
    cin.ignore();
    FOR(i,1,n,1) cin >> a[i].a >> a[i].b >> a[i].c;
    sort(a+1,a+1+n,ss);

    FOR(i,1,n,1) cout << a[i].a << " " << a[i].b << " " << a[i].c << '\n';
    
    
	return 0;
}
 