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
string s;

ll Logic(string s)
{
    ll res = 0, num = 0;
    s += "abc";

    for(char x : s) 
    {
        if(isdigit(x)) num = num * 10 + x - '0';
        else 
        {
            res += num;
            num = 0;
        }
    }

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << Logic(s) << '\n';
    }
    
    
	return 0;
}
 