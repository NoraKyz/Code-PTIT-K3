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

ll m, s;

string SinhMax(ll m, ll s)
{
    string res = "";
    while(m--)
    {
        if(s <= 9) 
        {
            res += (s + '0');
            s = 0;
        }
        else 
        {
            res += '9';
            s-= 9;
        }
    }

    if(s > 0) return "-1";

    return res;
}

string SinhMin(ll m, ll s)
{
    string res = "";
    while(m--)
    {
        if(s <= 9) 
        {
            if(s > 1) 
            {
                if(m >= 1) 
                {
                    res += (s - 1 + '0');
                    s = 1;            
                }
                else 
                {
                    res += (s + '0');
                    s = 0;                  
                }
            }
            else
            {
                if(m == 0) 
                {
                    res += '1';
                    s = 0;                 
                }
                else 
                {
                    res += '0';                 
                }
            }
        }
        else 
        {
            res += '9';
            s-= 9;
        }
    }

    if(s > 0) return "-1";
    
    reverse(all(res));
    return res;
}

int main()
{   
    
    cin >> m >> s;

    if(s == 0) return cout << "-1 -1",0;
    
    cout << SinhMin(m,s) << " " << SinhMax(m,s);
    
	return 0;
}
 