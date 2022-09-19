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
string s;

ll Solve(ll k)
{
    ll len = s.size(), res = 0;
    FOR(i,0,len-1,1)
    {
        ll cnt = 0;
        FOR(j,i,len-1,1)
        {
            cnt = (cnt * 10 + s[j] - '0')%k;
            if(cnt == 0) res++;
        }      
    } 

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = 0;
        cin >> s;
        cout << Solve(8) - Solve(24) << '\n';
    }
    
    
	return 0;
}
 