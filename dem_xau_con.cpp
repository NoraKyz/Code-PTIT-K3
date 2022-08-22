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

ll t, k;
string s;

bool Check(string s)
{
    set<char> st;
    for(auto x : s) st.insert(x);
    if(st.size() != k) return 0;
    return 1;
}

ll Logic(string s)
{
    ll n = s.size() - 1, res = 0;
    FOR(i,0,n,1) 
    {
        FOR(j,i+1,n,1) 
        {
            string tmp = s.substr(i, j - i + 1);
            if(Check(tmp)) res++;
        }
    }
    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s >> k;
        cout << Logic(s) << '\n';
    }
    
    
	return 0;
}
 