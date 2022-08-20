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
    string name, birth, address, sex, phone, date;
};

void nhap(NhanVien &A)
{
    getline(cin, A.name);
    cin >> A.sex >> A.birth;
    cin.ignore();
    getline(cin, A.address);
    cin >> A.phone >> A.date;
}

void in(NhanVien A)
{
    cout << "00001" << " ";
    cout << A.name << " " << A.sex << " " << A.birth << " " << A.address << " " << A.phone << " " << A.date;
}


int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
