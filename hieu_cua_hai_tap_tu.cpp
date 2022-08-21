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
string s1, s2;

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        unordered_map<string,bool> m;
        getline(cin, s1);
        getline(cin, s2);

        stringstream ss1(s1);
        string token;
        while(ss1 >> token)
        {
            m[token] = 1;
        }

        stringstream ss2(s2);
        while(ss2 >> token)
        {
            if(m[token]) m[token] = 0;
        }   

        set<pair<string,bool>> st(all(m));

        for(auto it : st) if(it.second) cout << it.first << " ";

        cout << '\n';

    }
    
    
	return 0;
}
 