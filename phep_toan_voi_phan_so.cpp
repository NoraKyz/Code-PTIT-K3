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
    ll tu, mau;
};

void nhap(PhanSo &A)
{
    cin >> A.tu >> A.mau;
}

void in(PhanSo &A)
{
    cout << A.tu << '/' << A.mau;
}

void rutgon(PhanSo &A)
{
    ll res = __gcd(A.tu, A.mau);
    A.tu /= res;
    A.mau /= res;
}

PhanSo tong(PhanSo A, PhanSo B)
{
    ll mau = A.mau * B.mau;
    ll tu = A.tu * B.mau + B.tu * A.mau;

    PhanSo res;
    res.tu = tu;
    res.mau = mau;
    rutgon(res);
    return res;
}

PhanSo nhan(PhanSo A, PhanSo B)
{
    ll mau = A.mau * B.mau;
    ll tu = A.tu * B.tu;

    PhanSo res;
    res.tu = tu;
    res.mau = mau;
    rutgon(res);
    return res;
}

void process(PhanSo A, PhanSo B)
{
    PhanSo C = nhan(tong(A,B),tong(A,B));
    in(C);
    cout << " ";
    PhanSo D = nhan(nhan(A,B),C);
    in(D);
    cout << '\n';
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
 