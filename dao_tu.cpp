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

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        vector<string> v;
        getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss >> token)
        {
            v.push_back(token);
        }

        ll n = v.size();
        FORD(i,n-1,0,1) cout << v[i] << " ";
        cout << '\n';
    }
    
    
	return 0;
}
 