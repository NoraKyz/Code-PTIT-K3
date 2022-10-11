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

ll t, n, m;
ll f[1005] = {0};

void Search()
{
    
}

int main()
{   
    // Xét a[i] > 3 => y = 0, 1 || y > i để thỏa mãn pt x^y > y^x
    // a[i] = 0 => không tồn tại y thỏa mãn
    // a[i] = 1 => y = 0
    // a[i] = 2 => y = 0, 1 || y > 4
    // a[i] = 3 => y = 0, 1, 2 || y > 3

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ll b[m+1], bm[1001] = {0}, res = 0;
        unordered_map<ll,ll> am;

        FOR(i,1,n,1) 
        {
            ll x;
            cin >> x;
            am[x]++;
        }

        FOR(i,1,m,1) 
        {
            cin >> b[i];
            bm[b[i]]++;
        }
        sort(b+1,b+1+m);

        for(auto it : am)
        {
            if(it.first == 0) res += 0;
            else if(it.first == 1) res += it.second * bm[0];
            else if(it.first == 2) 
            {
                ll d = upper_bound(b+1,b+1+m,4) - b;
                res += it.second * (bm[0] + bm[1] + m-d+1);
            }
            else if(it.first == 3)
            {
                ll d = upper_bound(b+1,b+1+m,it.first) - b;
                res += it.second * (bm[0] + bm[1] + bm[2] + m-d+1);
            }
            else 
            {
                ll d = upper_bound(b+1,b+1+m,it.first) - b;

                res += it.second * (bm[0] + bm[1] + m-d+1);
            }

            //cout << it.first << " " << res << '\n';

        }

        cout << res << '\n';
    }
    
    
	return 0;
}
 