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
unordered_map<string,ll> m;
vector<pair<string,ll> > v;

bool Check(string s)
{
    if(s.size() == 1) return 0;
    string tmp = s;
    reverse(all(s));
    return tmp == s;
}

bool ss(pair<string,ll> a, pair<string,ll> b)
{
    if(a.first.size() == b.first.size()) return a.first > b.first;
    else return (a.first.size() > b.first.size());
}

int main()
{   
    while(cin >> s)
    {
        m[s]++;
    }

    for(auto it : m) if(Check(it.first)) v.push_back(it); 
    sort(all(v),ss);

    for(auto it : v) cout << it.first << " " << it.second << '\n';
    
    
	return 0;
}
 