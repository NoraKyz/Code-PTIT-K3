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
ll nt[100005] = {0};

void Sieve()
{
    FOR(i,2,1e5,2) nt[i] = 2;

    FOR(i,3,1e5,2) 
    {
        if(nt[i] == 0)
        {
            FOR(j,i,1e5,i*2) 
            {
                if(nt[j] == 0) nt[j] = i;
            }
        }
    }
}

ll SumOfNumber(ll n) 
{
    ll res = 0;
    while(n > 0)
    {
        res += n%10;
        n/=10;
    }

    return res;
}

string Logic(ll n)
{
    if(nt[n] == n) return "NO";

    ll sumDigitN = SumOfNumber(n), sumDivisor = 0;
    while(n != 1)
    {
        sumDivisor+= SumOfNumber(nt[n]);
        n/= nt[n];
    }

    if(sumDigitN == sumDivisor) return "YES";
    return "NO";
}

int main()
{   
    Sieve();
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << Logic(n) << '\n';
    }
    
    
	return 0;
}
 