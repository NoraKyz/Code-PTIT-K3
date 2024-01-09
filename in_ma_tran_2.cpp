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
ll a[50][50];

void Display1()
{
    deque<pair<ll,ll>> d = {{-1,0},{0,-1},{1,0},{0,1}};

    ll i = n*2+1, j = n*2, lim = 3, cnt = 0, lv = 0;

    while(i >= 1 && i <= n*4 && j >= 1 && j <= n*4)
    {
        cout << a[i][j] << " ";    

        cnt++;
        if(cnt == lim) 
        {
            lv++;
            if(lv == 2) 
            {
                lv = 0;
                lim += 2;
            }
            cnt = 1;
            d.push_front(d.back());
            d.pop_back();
        }

         
        i += d.front().first;
        j += d.front().second;       
    }

}

void Display2()
{
    deque<pair<ll,ll>> d = {{1,0},{0,1},{-1,0},{0,-1}};

    ll i = n*2, j = n*2+1, lim = 3, cnt = 0, lv = 0;

    while(i >= 1 && i <= n*4 && j >= 1 && j <= n*4)
    {
        cout << a[i][j] << " ";    

        cnt++;
        if(cnt == lim) 
        {
            lv++;
            if(lv == 2) 
            {
                lv = 0;
                lim += 2;
            }
            cnt = 1;
            d.push_front(d.back());
            d.pop_back();
        }

         
        i += d.front().first;
        j += d.front().second;       
    }
}

void Solve(ll n)
{
    ll ghi = 1;
    FOR(i,1,n*4,1) 
    {
        FOR(j,1,n*4,1)
        {
            a[i][j] = ghi;
            ghi++;
        }
    }

    Display1();
    cout << '\n';
    Display2();
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n;
        Solve(n);
        cout << '\n';
    } 
    
	return 0;
}
 