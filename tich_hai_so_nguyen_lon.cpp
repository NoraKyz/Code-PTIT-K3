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

string multiply(string num1, string num2)
{
    ll len1 = num1.size();
    ll len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
 
    vector<int> result(len1 + len2, 0);
 
    ll i_n1 = 0;
    ll i_n2 = 0;
     
    FORD(i,len1-1,0,1)
    {
        ll carry = 0;
        ll n1 = num1[i] - '0';
 
        i_n2 = 0;
                  
        FORD(j,len2-1,0,1)
        {
            ll n2 = num2[j] - '0';

            ll sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
            carry = sum/10;

            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;
        }
 
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }
 
    ll i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
 
    if (i == -1)
    return "0";
 
    string s = "";
     
    while (i >= 0)
        s += std::to_string(result[i--]);
 
    return s;
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << multiply(a,b) << '\n';
    }
    
    
	return 0;
}
 