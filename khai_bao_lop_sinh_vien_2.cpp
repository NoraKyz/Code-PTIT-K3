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

class SinhVien
{
public:

    string id = "B20DCCN001";
    string name = "", birth = "", classroom = "";
    double gpa = 0;

    
public:
    /*void nhap()
    {
        getline(cin, this->name);
        cin >> this->classroom >> this->birth >> this->gpa;
    }

    void xuat()
    {
        if (this->birth[1] == '/')
        this->birth = "0" + this->birth;
        if (this->birth[4] == '/')
        this->birth.insert(3, "0");

        
        cout << this->id << " " << this->name << " " << this->classroom << " " << this->birth << " ";
        cout << fixed << setprecision(2) << this->gpa;
    }*/

    friend istream &operator>>(istream &is, SinhVien &obj)
    {
        getline(is, obj.name);
        is >> obj.classroom >> obj.birth >> obj.gpa;    

        return is;
    }
 
    friend ostream &operator<<(ostream &os, SinhVien obj)
    {
        if (obj.birth[1] == '/')
        obj.birth = "0" + obj.birth;
        if (obj.birth[4] == '/')
        obj.birth.insert(3, "0");

        
        os << obj.id << " " << obj.name << " " << obj.classroom << " " << obj.birth << " ";
        os << fixed << setprecision(2) << obj.gpa;

        return os;
    }
    
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
 