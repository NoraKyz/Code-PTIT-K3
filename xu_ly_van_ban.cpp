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


int main()
{   
    while(getline(cin, s))
    {
        vector<string> v;
        for(char &x : s) if(x >= 'A' && x <= 'Z') x+=32;
        stringstream ss(s);
        while(ss >> token)
        {
            v.pb(token);
        }

        bool kt = 1;
        for(auto &x : v)
        {
            bool down = 0;
            ll n = x.size();
            if(x[n-1] == '.' || x[n-1] == '?' || x[n-1] == '!') 
            {
                x.erase(x.begin() + n - 1);
                down = 1;
            }

            if(kt) 
            {
                kt = 0;
                x[0]-=32;
                cout << x << " ";
            }
            else cout << x << " ";

            

            if(down) 
            {
                kt = 1;
                cout << '\n';
            }
        }
    }
    
    
	return 0;
}
 