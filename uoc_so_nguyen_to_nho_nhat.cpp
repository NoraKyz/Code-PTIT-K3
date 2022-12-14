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
ll f[10005] = {0};

void Sieve()
{
    f[1] = 1;
    FOR(i,2,10000,2) f[i] = 2;

    FOR(i,3,10000,2) 
    {
        if(f[i] == 0) 
        {
            f[i] = i;
            FOR(j,i*3,10000,i*2) if(f[j] == 0) f[j] = i;
        }
    }
}

int main()
{   
    Sieve();
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) cout << f[i] << " ";
        cout << '\n';
    }
    
    
	return 0;
}
 