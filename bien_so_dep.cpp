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
    //5 6 7 9 10
    if(s[6] == s[7] && s[6] == s[5] && s[6] == s[9] && s[6] == s[10]) return "YES";
    if(s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) return "YES";
    if(s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return "YES";
    if((s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[5] == '6' || s[5] == '8') && (s[9] == '6' || s[9] == '8') && (s[10] == '6' || s[10] == '8')) return "YES";
    return "NO";
}

int main()
{   
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        cout << Logic(s) << '\n';
    }   
	return 0;
}
 