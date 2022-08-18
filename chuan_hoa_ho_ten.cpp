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
vector<string> v;

int main()
{   
    getline(cin, s);

    for(auto &x : s) if(x >= 'A' && x <= 'Z') x+= 32;

    stringstream ss(s);
    string token;
    while(ss >> token)
    {
        v.push_back(token);
    }

    ll n = v.size()-1;

    FOR(i,0,n-1,1) 
    {
        v[i][0]-= 32;
        cout << v[i];
        if(i != n-1) cout << " ";
    }

    cout << ", ";
    for(auto &x : v[n]) x-= 32;
    cout << v[n];



    
	return 0;
}
 