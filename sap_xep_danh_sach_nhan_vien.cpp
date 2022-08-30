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

ll tmp = 1;

struct NhanVien
{
    ll id;
    string name, birth, address, sex, phone, date;
};

void nhap(NhanVien &A)
{
    A.id = tmp++;
    cin.ignore();
    getline(cin, A.name);
    cin >> A.sex >> A.birth;
    cin.ignore();
    getline(cin, A.address);
    cin >> A.phone >> A.date;
}

void in(NhanVien A)
{
    if(A.id < 10) cout << "0000" << A.id;
    else cout << "000" << A.id;

    cout << " ";

    cout << A.name << " " << A.sex << " " << A.birth << " " << A.address << " " << A.phone << " " << A.date;
    cout << '\n';
}

bool ss(NhanVien A, NhanVien B)
{
    // dd/mm/yyyy
    string a = A.birth.substr(6,4), b = B.birth.substr(6,4);
    a += A.birth.substr(0,2);
    b += B.birth.substr(0,2);
    a += A.birth.substr(3,2);
    b += B.birth.substr(3,2);
    return (a < b);
    
}

void sapxep(NhanVien a[], ll n)
{
    sort(a,a+n,ss);
}

void inds(NhanVien a[], ll n)
{
    FOR(i,0,n-1,1) in(a[i]);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
