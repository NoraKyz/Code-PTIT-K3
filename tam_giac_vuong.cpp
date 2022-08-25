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
ll a[50001];

string Check()
{
    FOR(i,1,n,1)
    {
        FOR(j,i+1,n,1)
        {
           ll h = a[i]*a[i] + a[j]*a[j];
           ll k = (ll) sqrt(h);
           if(k * k == h)
           {
                if(binary_search(a+1+j,a+1+n,k)) return "YES";
           }             
        }
    }

    return "NO";
} 

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,1,n,1) cin >> a[i];
        sort(a+1,a+1+n);
        cout << Check() << '\n';
    }
    
    
	return 0;
}
 