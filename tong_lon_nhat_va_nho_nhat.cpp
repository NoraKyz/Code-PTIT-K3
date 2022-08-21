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
string s11, s21;

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s11 >> s21;
        string s12 = s11, s22 = s21;
        ll a, b;

        for(auto &x : s11) if(x == '6') x = '5';
        for(auto &x : s21) if(x == '6') x = '5';
        for(auto &x : s12) if(x == '5') x = '6';
        for(auto &x : s22) if(x == '5') x = '6';

        a = stoll(s11, nullptr, 10);
        b = stoll(s21, nullptr, 10);

        cout << a + b << " ";

        a = stoll(s12, nullptr, 10);
        b = stoll(s22, nullptr, 10);

        cout << a + b << '\n';
    }
    
    
	return 0;
}
 