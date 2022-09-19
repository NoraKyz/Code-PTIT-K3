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

ll t, n, b, p, k;

void slove(ll b, ll p)
{
    ll dem = 0;
    FOR(i,1,p-1,1){
        if ((i * i) % p == 1){
            ll a = i + p * (b / p);
            if (a > b) a -= p;
            dem += ((a - i) / p + 1);
        }
    }
    cout << dem << '\n';
}

int main()
{   
    // note: a % p = 1 with p prime => a % p ^ n = 1 with any n

    cin >> t;
    while(t--)
    {
        cin >> b >> p;
        slove(b,p);       
    }
    
	return 0;
}
 