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

// ma trận 1, string 1, mảng 1, number 1, 1 bài tổng hợp

ll t;
string s1, s2;

string Solve(string s1, string s2)
{
	ll a[500] = {0}, b[500] = {0};

	for(char it : s1) a[it]++;
	for(char it : s2) b[it]++;

	FOR(i,'a','z',1) if(b[i] > a[i]) return "-1";

	ll i = 0, n = s1.size()-1, j = n;
	
	while(a[s1[j]]-1 >= b[s1[j]]) 
	{
		a[s1[j]]--;
		j--;
	}

	ll m = j-i+1;
	string res = s1.substr(i,m);
	
	while(i <= n) 
	{
		if(a[s1[i]]-1 >= b[s1[i]]) 
		{
			a[s1[i]]--;
			i++;
		}
		else if(j < n)
		{
			j++;
			a[s1[j]]++;
		}
		else break;
		
		if(m >= j-i+1) 
		{
			res = s1.substr(i,m);
			m = j-i+1;
		}
	}
	
	return res;
}

int main()
{   
	cin >> t;
	while(t--)
	{
		cin >> s1 >> s2;
		cout << Solve(s1,s2) << '\n';
	}
    
	return 0;
}