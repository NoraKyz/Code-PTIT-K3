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
char a[25][25];

int main()
{   
    cin >> t;
    while(t--)
    {
        ll res = 0;
        cin >> n;
        FOR(i,1,n,1) FOR(j,1,n,1) cin >> a[i][j];

        ll hoz[25][25], ver[25][25];
        // hang, cot dai nhat chua 'X' ket thuc tai vi tri o (i,j)

        hoz[1][1] = ver[1][1] = (a[1][1] == 'X');

        FOR(i,1,n,1){
            FOR(j,1,n,1){
            
                if(a[i][j] == 'O') hoz[i][j] = ver[i][j] = 0;
                else{
                    hoz[i][j] = (j==1)?1 : hoz[i][j-1] +1;
                    ver[i][j] = (i==1)?1 : ver[i-1][j] + 1;
                }
            }
        }

        FORD(i,n,1,1){
            FORD(j,n,1,1){
                ll small = min(hoz[i][j],ver[i][j]);
                while(small > res){
                    if(ver[i][j - small + 1] >= small&& hoz[i - small + 1][j] >= small) res = small;
                    small--;
                }
            }
        }

        cout << res << '\n';
    } 
    
    
	return 0;
}
 