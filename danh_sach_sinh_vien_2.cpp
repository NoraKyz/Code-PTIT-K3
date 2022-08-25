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
    string name, birth, classroom;
    double point;
};

void input(SinhVien &A)
{
    getline(cin, A.name);
    cin >> A.classroom >> A.birth >> A.point;
    cin.ignore();
}

void chuanhoangay(SinhVien &A)
{
    if (A.birth[1] == '/')
        A.birth = "0" + A.birth;
    if (A.birth[4] == '/')
        A.birth.insert(3, "0");
}

void output(SinhVien A)
{
    chuanhoangay(A);

    for(char &x : A.name) if(x >= 'A' && x <= 'Z') x+=32;

    stringstream ss(A.name);
    string token;
    while(ss >> token) 
    {
        token[0] -=32;
        cout << token << " ";
    }

    cout << A.classroom << " " << A.birth << " ";
    cout << fixed << setprecision(2) << A.point;
}

void nhap(SinhVien a[], ll n)
{
    cin.ignore();
    FOR(i,1,n,1) input(a[i]);   
}

void in(SinhVien a[], ll n)
{
    FOR(i,1,n,1) 
    {
        cout << "B20DCCN";
        if(i < 10) cout << "00" << i;
        else cout << "0" << i;

        cout << " ";
        output(a[i]);
        cout << '\n';
    }
    
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;   
    nhap(ds, N);
    in(ds, N);
    return 0;
}
 