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

ll t, n1, n2, n3;
ll a[1000001], b[1000001], c[1000001];

int main()
{   
    cin >> t;
    while(t--)
    {
        ll kt = 0;
        cin >> n1 >> n2 >> n3;
        FOR(i,1,n1,1) cin >> a[i];
        FOR(i,1,n2,1) cin >> b[i];
        FOR(i,1,n3,1) cin >> c[i];

        ll i = 1, j = 1, k = 1;
        //ll n = n1 + n2 + n3+1;
        //i <= n1 || j <= n2 || k <= n3
        while(i < n1 || j < n2 || k < n3)
        {
            //cout << i << " " << j << " " << k << '\n';

            if(a[i] == b[j] && b[j] == c[k]) 
            {
                cout << a[i] << " ";
                kt = 1;
                if(i < n1) i++;
                else if(j < n2) j++;
                else k++;
            } 
            else 
            {
                ll m = min(a[i], min(b[j], c[k]));

                if(m == a[i] && i < n1) i++;
                else if(m == b[j] && j < n2) j++;
                else if(m == c[k] && k < n3) k++;
                else 
                {
                    if(i < n1) i++;
                    else if(j < n2) j++;
                    else k++;
                }
            }

        }
        
        if(a[i] == b[j] && b[j] == c[k]) 
        {
            cout << a[i] << " ";
            kt = 1;
        }

        if(kt == 0) cout << -1;    

        cout << '\n';
    }
    
    
	return 0;
}
 