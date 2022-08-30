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

ll tmp = 0;

class NhanVien
{
public:

    ll id = 0;
    string name = "", birth = "", address = "", sex = "", date = "", number = "";
    
public:

    friend istream &operator>>(istream &is, NhanVien &obj)
    {
        obj.id = ++tmp;
        scanf("\n");
        getline(is, obj.name);
        is >> obj.sex >> obj.birth;
        scanf("\n");
        getline(is, obj.address);
        is >> obj.number >> obj.date;

        return is;
    }
 
    friend ostream &operator<<(ostream &os, NhanVien obj)
    {      

        /*if (obj.birth[1] == '/')
        obj.birth = "0" + obj.birth;
        if (obj.birth[4] == '/')
        obj.birth.insert(3, "0");

        for(char &x : obj.name) if(x >= 'A' && x <= 'Z') x+=32;       

        stringstream ss(obj.name);
        string token;
        while(ss >> token) 
        {
            token[0] -=32;
            os << token << " ";
        }*/

        if(obj.id < 10) os << "0000";
        else os << "000";
        os << obj.id << " ";

        os << obj.name << " " << obj.sex << " " << obj.birth << " " << obj.address << " " << obj.number << " " << obj.date;
        os << '\n';
        return os;
    }
    
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}