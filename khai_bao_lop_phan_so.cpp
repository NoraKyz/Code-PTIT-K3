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

class PhanSo
{
public:
    ll tu, mau;
    
public:

    PhanSo (ll tu, ll mau)
    {
        this->tu = tu;
        this->mau = mau;
    }

    friend istream &operator>>(istream &is, PhanSo &obj)
    {
        is >> obj.tu >> obj.mau;    

        return is;
    }
 
    friend ostream &operator<<(ostream &os, PhanSo obj)
    {      
        
        os << obj.tu << "/" << obj.mau;

        return os;
    }

    void rutgon()
    {
        ll res = __gcd(this->tu, this->mau);
        this->tu /= res;
        this->mau /= res;
    }
    
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
 