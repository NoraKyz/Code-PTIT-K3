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

struct SinhVien
{
    string id, name, classroom;
    double a, b, c;
};

void nhap(SinhVien &a)
{   
    cin >> a.id;
    scanf(" ");
    getline(cin, a.name);
    cin >> a.classroom;
    cin >> a.a >> a.b >> a.c;

}

bool ss(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}

void sap_xep(SinhVien a[], ll n)
{
    sort(a,a+n,ss);
}

void in_ds(SinhVien a[], ll n)
{
    FOR(i,0,n-1,1) 
    {
        cout << i+1 << " " << a[i].id << " " << a[i].name << " " << a[i].classroom << " ";
        cout << fixed << setprecision(1) << a[i].a << " " << a[i].b << " " << a[i].c << '\n';
    }
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
    
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}