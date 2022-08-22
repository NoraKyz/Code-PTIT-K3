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

string Number(char x) 
{
    switch(x)
    {
        case 'A': return "2";
        case 'B': return "2";
        case 'C': return "2";

        case 'D': return "3";
        case 'E': return "3";
        case 'F': return "3";

        case 'G': return "4";
        case 'H': return "4";
        case 'I': return "4";

        case 'J': return "5";
        case 'K': return "5";
        case 'L': return "5";

        case 'M': return "6";
        case 'N': return "6";
        case 'O': return "6";

        case 'P': return "7";
        case 'Q': return "7";
        case 'R': return "7";
        case 'S': return "7";

        case 'T': return "8";
        case 'U': return "8";
        case 'V': return "8";

        case 'W': return "9";
        case 'X': return "9";
        case 'Y': return "9";
        case 'Z': return "9";

        default : return "";
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        string res = "";
        cin >> s;
        for(char &x : s) 
        {
            if(x >= 'a' && x <= 'z') x-=32;
            res += Number(x);
        }

        string tmp = res;
        reverse(all(res));
        if(res == tmp) cout << "YES";
        else cout << "NO";

        cout << '\n';
    }
    
    
	return 0;
}
 