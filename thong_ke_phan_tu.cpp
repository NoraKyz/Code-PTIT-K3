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
unordered_map<ll,ll> m;
vector<ll> v;

int main()
{   
    while(cin >> n)
    {
        m[n]++;
        v.push_back(n);
    }

    for(auto it : v) if(m[it]) 
    {
        cout << it << " " << m[it] << '\n';
        m[it] = 0;
    }
    
    
	return 0;
}
 