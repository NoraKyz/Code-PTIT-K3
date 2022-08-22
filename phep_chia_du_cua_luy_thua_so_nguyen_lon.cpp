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

ll t, m, n;
string s;
ll ModuleBigNum(string s, ll m) 
{
    ll res = 0;
    for(char x : s) res = (res * 10 + x - '0')%m;
    return res;
}

ll ModulePowBigNum(string s, ll n)
{
    if(n == 0) return 1;

    ll res = ModulePowBigNum(s, n/2) % m;

    if(n%2 == 0) return res * res % m;
    return (res * res % m) * ModuleBigNum(s, m) % m; 
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s >> n >> m;
        cout << ModulePowBigNum(s,n) << '\n';
    }
    
    
	return 0;
}
 