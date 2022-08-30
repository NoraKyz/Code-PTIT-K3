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

        m[tmp.classroom.substr(1,2)].push_back(tmp);
    }

    /*FOR(i,1,n,1) 
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].classroom << " " << a[i].email << '\n';
    }*/

    cin >> t;
    while(t--)
    {
        cin >> x;
        cout << "DANH SACH SINH VIEN KHOA " << x << ":\n";
        x = x.substr(2,2);
        for(auto it : m[x]) 
        {
            cout << it.id << " " << it.name << " " << it.classroom << " " << it.email << '\n';
        }
    }


    
	return 0;
}
 