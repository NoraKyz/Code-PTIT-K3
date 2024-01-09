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

ll n, res = 0;
string s;
    
int main()
{   
    fast_cin
    int n, ans = 0;
	cin >> n;
	string s[n];
	map<string, int> mp;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		mp[s[i]]++;
	}
	for(int k = 0; k < n; k++){
		string x = s[k];
		set<string> st;
		for(int i = 0; i < x.length(); i++){
			string tmp = "";
			for(int j = i; j < x.length(); j++){
				tmp += x[j];
				st.insert(tmp);
			}	
		}
		for(string x : st){
			ans += mp[x];
		}
		ans--;
	}
	cout << ans;
    
    return 0;
}