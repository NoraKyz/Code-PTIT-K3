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
string a, b;
string Sub(string a, string b)
{
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;

    if(a < b) swap(a,b);

    ll nho = 0;
    string res = "";

    ll n = a.size();
    FORD(i,n-1,0,1) 
    {
        if(a[i] < b[i] + nho)
        {
            res += 10 + a[i] - b[i] - nho + '0';
            nho = 1;
        }
        else 
        {
            res += a[i] - b[i] - nho + '0';
            nho = 0;
        }   
    }

    reverse(all(res));
    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << Sub(a,b) << '\n';
    }
    
    
	return 0;
}
 