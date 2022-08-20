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

ll t, res = 0, n;
ll x[10] = {0};

bool CheckPrime(ll n)
{
    FOR(i,2,sqrt(n),1) if(n%i == 0) return 0;
    return 1;
}

ll CreateNumber(ll n)
{
    ll res = 0;
    FOR(i,1,n,1) res = res * 10 + x[i];
    return res;
}

void SinhTang(ll k, ll n)
{
    x[0] = 0;
    FOR(i,1,9,1) 
    {
        if(i > x[k-1])
        {
            x[k] = i;
            if(k == n) 
            {
                if(CheckPrime(CreateNumber(n))) res++;
            }
            else if(k < n) SinhTang(k+1, n);
        }
    }
}

void SinhGiam(ll k, ll n)
{
    x[0] = 10;
    FOR(i,1,9,1) 
    {
        if(i < x[k-1])
        {
            x[k] = i;
            if(k == n) 
            {
                if(CheckPrime(CreateNumber(n))) res++;
            }
            else if(k < n) SinhGiam(k+1, n);
        }
    }
}


int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        SinhTang(1,n);
        SinhGiam(1,n);

        cout << res << '\n';

        res = 0;
    }
    
    
	return 0;
}
 