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

bool ss(gv a, gv b)
{
    if(a.lastName != b.lastName) return a.lastName < b.lastName;
    return a.id < b.id;
}

gv a[10000];

int main()
{   
    cin >> n;
    FOR(i,1,n,1) 
    {
        a[i].id = i;

        scanf("\n");
        getline(cin, a[i].name);
        stringstream ss1(a[i].name);
        while(ss1 >> a[i].lastName)

        scanf("\n");
        getline(cin, a[i].subject);
        for(char &it : a[i].subject) if(it >= 'a' && it <= 'z') it-=32;
        string res = "";
        stringstream ss2(a[i].subject);
        while(ss2 >> a[i].subject)
        {
            res += a[i].subject[0];
        }
        a[i].subject = res;
    }

    sort(a+1,a+1+n,ss);
    FOR(i,1,n,1) 
    {
        cout << "GV";
        if(a[i].id < 10) cout << "0";
        cout << a[i].id << " " << a[i].name << " " << a[i].subject << '\n';
    }
    
	return 0;
}
 