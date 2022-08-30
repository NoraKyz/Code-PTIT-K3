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

struct SinhVien
{
    string id, name, classroom, email;
};

bool ss(SinhVien a, SinhVien b)
{
    return a.id < b.id;
}

SinhVien a[10000];

int main()
{   
    ll n = 0;
    while(cin >> a[++n].id)
    {
        scanf("\n");
        getline(cin, a[n].name);
        cin >> a[n].classroom >> a[n].email;
    }

    sort(a+1,a+1+n,ss);
    FOR(i,1,n,1) 
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].classroom << " " << a[i].email << '\n';
    }


    
	return 0;
}
 