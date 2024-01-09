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

ll f[10000] = {0};

int main()
{   
    ifstream fp;
    fp.open("DATA.in");
    ll x;

    while(fp >> x)
    {
        f[x]++;
    }

    FOR(i,0,1000,1) if(f[i] > 0) cout << i << " " << f[i] << '\n';
    fp.close();
    
	return 0;
}
 
