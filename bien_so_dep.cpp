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
string Logic(string s)
{ 
    // 7 8 9 11 12
    if(s[7] == s[8] && s[7] == s[9] && s[7] == s[11] && s[7] == s[12]) return "YES";
    if(s[7] < s[8] && s[8] < s[9] && s[9] < s[11] && s[11] < s[12]) return "YES";
    if((s[7] == s[8] && s[8] == s[9]) && (s[11] == s[12])) return "YES";
    if((s[7] == '6' || s[7] == '8') && (s[8] == '6' || s[8] == '8') && (s[9] == '6' || s[9] == '8') && (s[11] == '6' || s[11] == '8') && (s[12] == '6' || s[12] == '8')) return "YES";
    return "NO";
}

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        cout << Logic(s) << '\n';
    }   
	return 0;
}
 