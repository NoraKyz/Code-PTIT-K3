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
bool check(string s)
{
    ll n = s.size(), l = 0, c = 0;
    FOR(i,0,n-1,1) if(i%2) l+= s[i] - '0'; else c+= s[i] - '0';

    if(abs(l-c)%11 == 0) return 1;
    return 0;
}

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
		cin >> s;
        cout << check(s) << '\n';  
	}
    
	return 0;
}
 