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

ll t;
string s;

bool Check(string s)
{
    ll a[500] = {0}, n = s.size();
    for(auto x : s) a[x]++;
    if(n%2 == 0) n = n/2;
    else n = n/2 + 1; 

    FOR(i,'a','z',1) if(a[i] > n) return 0;
    return 1;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << Check(s) << '\n';
    }
    
    
	return 0;
}
 