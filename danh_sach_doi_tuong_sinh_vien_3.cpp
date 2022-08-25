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

/*ll tmp = 0;

class SinhVien
{
public:

    ll id = 0;
    string name = "", birth = "", classroom = "";
    double gpa = 0;
    
public:

    friend istream &operator>>(istream &is, SinhVien &obj)
    {
        cin.ignore();
        getline(is, obj.name);
        is >> obj.classroom >> obj.birth >> obj.gpa;
        obj.id = ++tmp; 

        return is;
    }
 
    friend ostream &operator<<(ostream &os, SinhVien obj)
    {


        if (obj.birth[1] == '/')
        obj.birth = "0" + obj.birth;
        if (obj.birth[4] == '/')
        obj.birth.insert(3, "0");

        for(char &x : obj.name) if(x >= 'A' && x <= 'Z') x+=32;
        
        if(obj.id < 10) os << "B20DCCN00";
        else os << "B20DCCN0";
        os << obj.id << " ";

        stringstream ss(obj.name);
        string token;
        while(ss >> token) 
        {
            token[0] -=32;
            os << token << " ";
        }

        os << obj.classroom << " " << obj.birth << " ";
        os << fixed << setprecision(2) << obj.gpa << '\n';
        return os;
    }
    
};*/

class SinhVien
{
public:

    ll id = 0;
    string name = "", birth = "", classroom = "";
    double gpa = 0;
    
public:

    friend istream &operator>>(istream &is, SinhVien &obj)
    {
        scanf("\n");
        getline(is, obj.name);
        is >> obj.classroom >> obj.birth >> obj.gpa;
        obj.id = ++tmp;   

        return is;
    }
 
    friend ostream &operator<<(ostream &os, SinhVien obj)
    {      

        if (obj.birth[1] == '/')
        obj.birth = "0" + obj.birth;
        if (obj.birth[4] == '/')
        obj.birth.insert(3, "0");

        for(char &x : obj.name) if(x >= 'A' && x <= 'Z') x+=32;
        
        if(obj.id < 10) os << "B20DCCN00";
        else os << "B20DCCN0";
        os << obj.id << " ";

        stringstream ss(obj.name);
        string token;
        while(ss >> token) 
        {
            token[0] -=32;
            os << token << " ";
        }

        os << obj.classroom << " " << obj.birth << " ";
        os << fixed << setprecision(2) << obj.gpa << '\n';
        return os;
    }
    
};

bool ss(SinhVien A, SinhVien B)
{
    return A.gpa > B.gpa;
}

void sapxep(SinhVien a[], ll n)
{
    sort(a,a+n,ss);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}