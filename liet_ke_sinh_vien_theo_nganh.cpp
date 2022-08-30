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

ll t, n;
string x;

struct SinhVien
{
    string id, name, classroom, email;
};

SinhVien tmp;
unordered_map<string,vector<SinhVien>> m;

int main()
{   
    cin >> n;
    FOR(i,1,n,1)
    {
        cin >> tmp.id;
        scanf("\n");
        getline(cin, tmp.name);
        cin >> tmp.classroom >> tmp.email;
        string ds = tmp.id.substr(3,4);
        if(tmp.classroom[0] != 'E' || (ds != "DCCN" && ds != "DCAT")) m[ds].push_back(tmp);
    }

    /*FOR(i,1,n,1) 
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].classroom << " " << a[i].email << '\n';
    }*/

    cin >> t;
    while(t--)
    {
        scanf("\n");
        getline(cin, x);
        for(auto &it : x) if(it >= 'a' && it <= 'z') it-=32;

        cout << "DANH SACH SINH VIEN NGANH " << x << ":\n";
        if(x == "KE TOAN") x = "DCKT";
        else if(x == "CONG NGHE THONG TIN") x = "DCCN";
        else if(x == "DIEN TU") x = "DCDT";
        else if(x == "VIEN THONG") x = "DCVT";
        else x = "DCAT";

        for(auto it : m[x]) 
        {
            cout << it.id << " " << it.name << " " << it.classroom << " " << it.email << '\n';
        }
    }


    
	return 0;
}
 