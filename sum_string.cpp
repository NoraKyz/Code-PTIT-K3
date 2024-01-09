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

ll t;
string s;

string string_sum(string str1, string str2)
{
    if (str1.size() < str2.size())
        swap(str1, str2);
 
    int m = str1.size();
    int n = str2.size();
    string ans = "";
 
    int carry = 0;
    for (int i = 0; i < n; i++) {
 
        int ds = ((str1[m - 1 - i] - '0')
                  + (str2[n - 1 - i] - '0') + carry)
                 % 10;
 
        carry = ((str1[m - 1 - i] - '0')
                 + (str2[n - 1 - i] - '0') + carry)
                / 10;
 
        ans = char(ds + '0') + ans;
    }
 
    for (int i = n; i < m; i++) {
        int ds = (str1[m - 1 - i] - '0' + carry) % 10;
        carry = (str1[m - 1 - i] - '0' + carry) / 10;
        ans = char(ds + '0') + ans;
    }
 
    if (carry)
        ans = char(carry + '0') + ans;
    return ans;
}

bool Core(string s1, string s2, ll cnt, ll n)
{
    if(cnt > n) return 1;

    string tmp = string_sum(s1,s2);
    string s3 = "";

    FOR(h,cnt,n,1) 
    {
        s3 += s[h];
        if(s3 == tmp) 
        {
            return Core(s2,s3,h+1,n);
        }
    }

    return 0;
}

string Solve()
{
    ll n = s.size()-1;
    string s1 = "";

    FOR(i,0,n-2,1) 
    {
        s1 += s[i];
        string s2 = "";

        FOR(j,i+1,n-1,1) 
        {
            s2 += s[j];
            string tmp = string_sum(s1,s2);
            string s3 = "";

            FOR(h,j+1,n,1) 
            {
                s3 += s[h];
                if(s3 == tmp) 
                {
                    if(Core(s2,s3,h+1,n)) return "Yes";
                }
            }
        }
    }

    return "No";
}
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << Solve() << '\n';
    }
    
    return 0;
}