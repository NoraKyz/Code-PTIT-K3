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

set<string> st;

int main()
{   
    ifstream fp;
    fp.open("VANBAN.in");
    string s;

    while(fp >> s)
    {
        for(auto &it : s) if(it >= 'A' && it <= 'Z') it+= 32;
        st.insert(s);
    }

    for(auto it : st) cout << it << '\n';
    fp.close();
    
	return 0;
}
 
