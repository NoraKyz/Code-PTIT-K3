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

string Check(string s)
{
    ll a[500] = {0};
    if(s[0] == '0') return "INVALID";
    for(char x : s) 
    {
        if(x < '0' || x > '9') return "INVALID";
        a[x]++;
    }

    FOR(i,'0','9',1) if(a[i] == 0) return "NO";
    return "YES";

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
 