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

ll t, x, n, k;

int main()
{   
    
    cin >> t;
    cin.ignore();
    while(t--)
	{
        ll check = -1;
		cin >> n >> x;
        FOR(i,1,n,1) 
        {
            cin >> k;
            if(k == x) check = 1; 
        } 

        cout << check << '\n';
	}
    
	return 0;
}
 