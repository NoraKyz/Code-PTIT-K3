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

struct gv
{
    ll id;
    string name, subject, lastName;
};

unordered_map<string,vector<gv>> m;
gv tmp;

int main()
{   
    cin >> n;
    FOR(i,1,n,1) 
    {
        tmp.id = i;

        scanf("\n");
        getline(cin, tmp.name);
        stringstream ss1(tmp.name);
        while(ss1 >> tmp.lastName)

        scanf("\n");
        getline(cin, tmp.subject);
        for(char &it : tmp.subject) if(it >= 'a' && it <= 'z') it-=32;
        string res = "";
        stringstream ss2(tmp.subject);
        while(ss2 >> tmp.subject)
        {
            res += tmp.subject[0];
        }
        tmp.subject = res;

        m[tmp.subject].push_back(tmp);
    }

    cin >> t;
    while(t--)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        for(char &it : s) if(it >= 'a' && it <= 'z') it-=32;
        string res = "";
        stringstream ss2(s);
        while(ss2 >> s)
        {
            res += s[0];
        }
        s = res;

        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        for(auto it : m[s]) 
        {            
            cout << "GV";
            if(it.id < 10) cout << "0";
            cout << it.id << " " << it.name << " " << it.subject << '\n';
        }

    }
    
	return 0;
}
 