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

bool Check(ll a[])
{
    FOR(i,'0','9',1) if(a[i] != 0 && a[i]%2 == 0) return 0;
    
    ll d = max_element(a+1,a+1+500) - a;
    if(d == '0') return 0;

    return 1;
}

string Solve(string s)
{
    string res = ""; 
    bool kt = 0;
    ll a[500] = {0};

    for(char it : s) a[it]++;

    pair<char,ll> x = {'.',-1};
    FOR(i,'0','9',1) if(a[i]%2) 
    {
        if(a[i] > x.second) 
        {
            x.first = i;
            x.second = a[i];
        }
    }
    else if(a[i] > 0 && i > '0') kt = 1;

    kt = Check(a);

    if(kt) 
    {
        FORD(i,'9','0',1) if(a[i]%2 == 0 && a[i] > 0)
        {
            FOR(j,1,a[i]/2,1) res+=i;
        }

        if(x.first != '.') FOR(i,1,x.second,1) res+= x.first;

        FOR(i,'0','9',1) if(a[i]%2 == 0 && a[i] > 0)
        {
            FOR(j,1,a[i]/2,1) res+=i;
        }
    }
    else 
    {
        FORD(i,'9','0',1) if(a[i]%2) 
        {
            FOR(j,1,a[i],1) res+= i;
            break;
        }
    }

    

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << Solve(s) << '\n';
    }
    
    
	return 0;
}
 