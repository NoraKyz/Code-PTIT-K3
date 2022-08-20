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
unordered_map<char,ll> m;

int main()
{   
    cin >> t;
    while(t--)
    {       
        cin >> s;
        char tmp = s[0];
        for(auto x : s)
        {
            if(x == tmp) m[x]++;
            else 
            {
                m[x]++;
                cout << tmp << m[tmp];
                m[tmp] = 0;
                tmp = x;
            } 
        }

        cout << tmp << m[tmp] << '\n';

        m.clear();
    }
    
    
	return 0;
}
 