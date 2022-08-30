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

ll n;
pair<string, string> a[105];

bool ss(pair<string, string> a, pair<string, string> b)
{
    string na = a.second.substr(6,4), nb = b.second.substr(6,4);
    na+= a.second.substr(3,2);
    nb+= b.second.substr(3,2);
    na+= a.second.substr(0,2);
    nb+= b.second.substr(0,2);

    return na>nb;
}

int main(){
    
    cin >> n;
    FOR(i,1,n,1) 
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a+1,a+1+n,ss);
    cout << a[1].first << '\n' << a[n].first;


    return 0;
}