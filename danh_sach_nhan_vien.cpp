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
struct NhanVien
{
    ll id;
    string name, birth, address, sex, phone, date;
};

void nhap(NhanVien &A)
{
    cin.ignore();
    getline(cin, A.name);
    cin >> A.sex >> A.birth;
    cin.ignore();
    getline(cin, A.address);
    cin >> A.phone >> A.date;
}

void in(NhanVien A)
{
    cout << A.name << " " << A.sex << " " << A.birth << " " << A.address << " " << A.phone << " " << A.date;
}

void inds(NhanVien ds[], ll n)
{
    FOR(i,0,n-1,1) 
    {
        if(i+1 < 10) cout << "0000" << i+1 << " ";
        else cout << "000" << i+1 << " ";
        in(ds[i]);
        cout << '\n';
    }
}


int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
