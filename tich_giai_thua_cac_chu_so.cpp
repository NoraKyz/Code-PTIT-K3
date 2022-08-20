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
string a;

int main()
{   
    cin >> t;
    while(t--)
    {
        ll digit[10] = {0};
        string res = "";
        cin >> n >> a;
        for(auto x : a)
        {
            if(x == '2') digit[2]++;
            else if(x == '3') digit[3]++;
            else if(x == '4') 
            {
                digit[3]++;
                digit[2]+=2;
            }
            else if(x == '5') digit[5]++;
            else if(x == '6')
            {
                digit[5]++;
                digit[3]++;
            }
            else if(x == '7') digit[7]++;
            else if(x == '8')
            {
                digit[7]++;
                digit[2]+=3;
            } 
            else if(x == '9') 
            {
                digit[7]++;
                digit[2]+=1;
                digit[3]+=2;
            }
        }

        FORD(i,9,2,1) while(digit[i]--) cout << i;

        cout << '\n';
    }
    
    
	return 0;
}
 