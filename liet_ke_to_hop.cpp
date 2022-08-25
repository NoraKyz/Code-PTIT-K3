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

ll t, n, k;
ll a[50];
bool kt[50] = {0};

void Display()
{
    FOR(i,1,k,1) cout << a[i];
}

void Logic(ll i)
{
    FOR(j,1,n,1) 
    {
        if(kt[j] == 0 && j > a[i-1])
        {
            a[i] = j;

            if(i == k) 
            {
                Display();
                cout << " ";
            }
            else if(i < k)
            {
                kt[j] = 1;
                Logic(i+1);             
                kt[j] = 0;
            }
        }
    }
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Logic(1);
        cout << '\n';
    }
    
    
	return 0;
}
 