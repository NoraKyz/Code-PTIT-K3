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

ll ModuleMu(ll n)
{
    ll res = 1;
    if(n == 0) return res;
    n = n%4;

    FOR(i,1,n,1) res*= 2;
    return res;
}

string Check(string s)
{
    ll res = 0;
    reverse(all(s));
    ll n = s.size();
    FOR(i,0,n-1,1) if(s[i] == '1') res += ModuleMu(i);

    if(res%5 == 0) return "Yes";
    return "No";
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
 