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

set<string> st1;
set<string> st2;
unordered_map<string,bool> m;

int main()
{   
    ifstream fp1, fp2;
    fp1.open("DATA1.in");
    fp2.open("DATA2.in");

    string s;

    while(fp1 >> s) 
    {
        for(auto &it : s) if(it >= 'A' && it <= 'Z') it+= 32;
        m[s] = 1;
        st1.insert(s);
    }
    while(fp2 >> s) 
    {
        for(auto &it : s) if(it >= 'A' && it <= 'Z') it+= 32;
        st1.insert(s);
        if(m[s]) st2.insert(s);
    }

    for(auto it : st1) cout << it << " ";
    cout << '\n';
    for(auto it : st2) cout << it << " ";

    fp1.close();
    fp2.close();
	return 0;
}
 
