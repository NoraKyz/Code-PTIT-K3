#include <bits/stdc++.h>
#define FOR(i, a, b, k) for (ll i = a; i <= b; i += k)
#define FORD(i, a, b, k) for (ll i = a; i >= b; i -= k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
#define fast_cin ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
const ll MOD = 1e9 + 7;

ll t;
struct SinhVien
{
    string name, birth, classroom;
    double point;
};

void nhap(SinhVien &A)
{
    getline(cin, A.name);
    cin >> A.classroom >> A.birth >> A.point;
}

void chuanhoangay(SinhVien &A)
{
    if (A.birth[1] == '/')
        A.birth = "0" + A.birth;
    if (A.birth[4] == '/')
        A.birth.insert(3, "0");
}

void in(SinhVien A)
{
    chuanhoangay(A);
    cout << "N20DCCN001"
         << " ";
    cout << A.name << " " << A.classroom << " " << A.birth << " ";
    cout << fixed << setprecision(2) << A.point;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
