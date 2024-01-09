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

bool checknt(ll n)
{
	FOR(i,2,sqrt(n),1) if(n%i == 0) return 0;
	return 1;
}

bool check(ll n)
{
	ll s = 0, h = n;
	while(n > 0) 
	{
		ll x = n%10;
		if(x != 2 && x != 3 && x != 5 && x != 7) return 0;
		s+= x;
		n/=10;
	}

	if(!checknt(s)) return 0;

	if(!checknt(h)) return 0;

	return 1;
}
	
int main()
{   
	fast_cin
	ll dem = 0;
	FOR(i,1,1e7,1) if(check(i)) dem++;
	cout << dem;
	return 0;
}