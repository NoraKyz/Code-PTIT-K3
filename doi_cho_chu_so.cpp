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

string Logic(string s)
{
    ll n = s.size(), l = -1, r;
    FORD(i,n-2,0,1) if(s[i] > s[i+1]) 
    {
        l = i;
        break;
    }

    if(l != -1) 
    {
        FORD(i,n-1,l+1,1) if(s[i] < s[l]) 
        {
            r = i;
            break;
        }

        FORD(i,n-1,l+1,1) if(s[i] == s[r]) r = i;

        swap(s[l], s[r]);
    }
    

    if(l == -1 || s[0] == '0') return "-1";
    else return s;
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
 