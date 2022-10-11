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
const ll MOD = 10007;

int t, n;
int a[200];

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / __gcd(a, b);
}


int Solve(int A[], int N) {

    // get the max LCM from the array
    int max = A[0];
    for (int i = 1; i < N; i++) {
        max = lcm(max, A[i]);
    }

    // set up the dp
    int dp[max+1][2];
    memset(dp, 0, sizeof(dp));
    int pri = 0;
    int cur = 1;

    // loop through n x 70000
    FOR(i,0,N-1,1) 
    {
        FOR(v,1,max,1) 
        {
            int x = A[i];
            if (dp[v][pri] > 0)
            {
                x = lcm(A[i], v);
                dp[v][cur] = (dp[v][cur] == 0) ? dp[v][pri] : dp[v][cur];
                if ( x % A[i] != 0 ) 
                {
                    dp[x][cur] += dp[v][pri] + dp[A[i]][pri];
                } 
                else 
                {
                    dp[x][cur] += ( x==v ) ? ( dp[v][pri] + dp[v][pri] ) : ( dp[v][pri] ) ;
                }
            }
        }

        dp[A[i]][cur]++; 
        pri = cur;
        cur = (pri + 1) % 2;
    }
    
    ll total = 0;
    FOR(j,0,max,1) 
    {
        if (dp[j][pri] > 0) total += dp[j][pri] * j;       
    }

    return total;
}

int main()
{   
    // dp[i][j] = số lần lặp lại của lcm các tập con = i ứng với tập có j phần tử
    cin >> t;
    FOR(k,1,t,1)
    {
        cin >> n;
        FOR(i,0,n-1,1) cin >> a[i];
        
        cout << "Case " << k << ": " << Solve(a,n) << '\n';
    }
    
	return 0;
}
 