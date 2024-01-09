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

set<ll> st;

int main()
{   
    ifstream fp;
    fp.open("DATA.in");

    ll a[10000] = {0};
    ll n, m, x;

    fp >> n;
    fp >> m;
    
    FOR(i,1,n,1) 
    {
        fp >> x;
        a[x] = 1;
    }

    FOR(i,1,m,1) 
    {
        fp >> x;
        if(a[x]) st.insert(x);
    }

    for(auto it : st) cout << it << " ";

    fp.close();
	return 0;
}
 
