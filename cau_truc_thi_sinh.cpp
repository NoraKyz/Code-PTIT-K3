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
struct ThiSinh
{
    string name, birth;
    double m1, m2, m3;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.birth >> A.m1 >> A.m2 >> A.m3;
}

void in(ThiSinh A)
{
    cout << A.name << " " << A.birth << " ";
    cout << fixed << setprecision(1) << (A.m1 + A.m2 + A.m3);
}


int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
 