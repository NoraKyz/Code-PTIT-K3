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
struct PhanSo
{
    ll t, m;
};

void nhap(PhanSo &A)
{
    cin >> A.t >> A.m;
}

void in(PhanSo &A)
{
    cout << A.t << '/' << A.m;
}

void rutgon(PhanSo &A)
{
    ll res = __gcd(A.t, A.m);
    A.t /= res;
    A.m /= res;
}

PhanSo tong(PhanSo A, PhanSo B)
{
    ll mau = A.m * B.m;
    ll tu = A.t * B.m + B.t * A.m;

    PhanSo res;
    res.t = tu;
    res.m = mau;
    rutgon(res);
    return res;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}