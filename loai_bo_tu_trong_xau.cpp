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
string s, key;

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
		getline(cin, s);
        
        ll res = 0;
        stringstream ss(s);
        string token;
        while(ss >> token)
        {
            if(token != key) cout << token << " ";
        } 

        cout <<'\n';       
	}
    
	return 0;
}
 