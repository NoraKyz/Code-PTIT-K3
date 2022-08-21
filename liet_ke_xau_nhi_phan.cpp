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
ll x[1000] = {0};

void Print(ll n)
{
    FOR(i,1,n,1) cout << x[i];
    cout << " ";
}

void Logic(ll i, ll n)
{
    FOR(j,0,1,1) 
    {
        x[i] = j;

        if(i == n) Print(n);      
        else if(i < n) Logic(i+1, n);
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        Logic(1, n);
        cout << '\n';
    }
    
    
	return 0;
}
 