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

int main()
{   
    ifstream file1 ("PTIT.in");
    ofstream file2 ("PTIT.out");

    string s;
    while(file1 >> s)
    {
        file2 << s << '\n';
    }

    file1.close();
    file2.close();
     
	return 0;
}
 