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
string s, token;
unordered_map<string,ll> m;

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        
        getline(cin, s);
        for(auto &x : s) if(x >= 'A' && x <= 'Z') x+=32; 
        stringstream ss(s);
        vector<string> v;
        while(ss >> token) v.pb(token);

        ll c = v.size() - 1;
        string res = "";
        res += v[c];
        FOR(i,0,c-1,1) res+= v[i][0];

        m[res]++;
        if(m[res] > 1) res += m[res] + '0';
        res+= "@ptit.edu.vn";

        cout << res << '\n';
        
    }
    
    
	return 0;
}
 