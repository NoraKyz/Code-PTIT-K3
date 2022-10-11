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
string a, b;

bool ss(string a, string b)
{
    ll lena = a.size(), lenb = b.size();
    if(lena == lenb) return a >= b;

    return lena >= lenb;
}

string Sub(string a, string b)
{
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;

    if(a < b) swap(a,b);

    ll nho = 0;
    string res = "";

    ll n = a.size();
    FORD(i,n-1,0,1) 
    {
        if(a[i] < b[i] + nho)
        {
            res += 10 + a[i] - b[i] - nho + '0';
            nho = 1;
        }
        else 
        {
            res += a[i] - b[i] - nho + '0';
            nho = 0;
        }   
    }

    reverse(all(res));

    ll x = 0;
    while(res[x] == '0') x++;
    res.erase(res.begin(), res.begin()+x);

    return res;
}

string Div(string a, string b)
{
    string tmp = "", res = "";

    for(char it : a)
    {
        tmp+= it;

        ll x = 0;
        while(tmp[x] == '0') x++;
        tmp.erase(tmp.begin(), tmp.begin()+x);

        if(ss(tmp,b)) 
        {
            //cout << tmp;
            ll cnt = 0;
            while(ss(tmp,b)) 
            {
                tmp = Sub(tmp,b);
                cnt++;
            }
            //cout << " " << cnt << '\n';
            res += to_string(cnt);       
        }
        else res += "0";
    }

    ll x = 0;
    while(res[x] == '0') x++;
    res.erase(res.begin(), res.begin()+x);

    if(res == "") return "0";

    return res;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << Div(a,b) << '\n';
    }
    
    
	return 0;
}
 