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

ll lim = INT_MAX;
ll res = 0;
bool check(string s)
{
    for(auto it : s) if(isdigit(it) == 0) return 0;
    return 1;
}

ll Ex(string s)
{
    ll res = 0;
    for(auto it : s) 
    {
        res = res * 10 + it - '0';
        if(res > lim) return 0;
    }

    return res;
}

int main()
{   
    ifstream fp;
    fp.open("DATA.in");
    string s;

    while(fp >> s)
    {
        //cout << s;
        if(check(s)) res += Ex(s);
    }

    cout << res;
    fp.close();
    
	return 0;
}
 
