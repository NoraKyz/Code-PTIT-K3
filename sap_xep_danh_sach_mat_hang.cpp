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

ll n;

struct Product
{
    ll id;
    string name, group;
    double sell, buy;
};

bool ss(Product A, Product B)
{
    return (A.sell - A.buy > B.sell - B.buy);
}

Product a[10000];

int main()
{   
    cin >> n;  
    FOR(i,1,n,1) 
    {
        a[i].id = i;
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        cin >> a[i].buy >> a[i].sell;
    }

    sort(a+1,a+1+n,ss);
    FOR(i,1,n,1) 
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].group << " ";
        cout << fixed << setprecision(2) << a[i].sell - a[i].buy << '\n';
    }
    
    
	return 0;
}
 