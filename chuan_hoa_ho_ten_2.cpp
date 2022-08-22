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
string s, token;

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> n;
        cin.ignore();
        getline(cin, s);
        for(auto &x : s) if(x >= 'A' && x <= 'Z') x+=32; 
        stringstream ss(s);
        vector<string> v;
        while(ss >> token)
        {
            token[0] -= 32;
            v.pb(token);
        }

        ll c = v.size();

        if(n == 1)
        {
            cout << v[c-1] << " ";
            FOR(i,0,c-2,1) cout << v[i] << " "; 
        }
        else 
        {
            FOR(i,1,c-1,1) cout << v[i] << " ";
            cout << v[0];
        }

        cout << '\n';
        
    }
    
    
	return 0;
}
 