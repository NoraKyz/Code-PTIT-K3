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

int main()
{   
    cin >> t;
    while(t--)
    {
        ll a[500] = {0}, res = 0;
        cin >> s;
        for(auto x : s) 
        {
            if(isdigit(x)) res += x - '0';
            else 
            {
                a[x]++;
            }
        }

        FOR(i,'A','Z',1) 
        {
            while(a[i]--)
            {
                cout << (char) i;
            }
        }

        cout << res << '\n';

    }
    
    
	return 0;
}
 