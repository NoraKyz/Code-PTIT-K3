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

struct Point
{
    ll x, y, z;
};

Point Vector(Point a, Point b)
{
    Point res;
    res.x = b.x - a.x;
    res.y = b.y - a.y;
    res.z = b.z - a.z;

    return res;
}

Point VectorN(Point a, Point b) 
{
    Point res;
    res.x = a.y * b.z - a.z * b.y;
    res.y = - a.x * b.z + a.z * b.x;
    res.z = a.x * b.y - a.y * b.x;  

    return res;
}

string Check(Point a, Point b, Point c, Point d) 
{
    Point ab = Vector(a,b), ac = Vector(a,c);
    Point res = VectorN(ab,ac);

    //cout << res.x << " " << res.y << " " << res.z << '\n';

    ll cnt = res.x * (d.x - a.x) + res.y * (d.y - a.y) + res.z * (d.z - a.z);

    if(cnt == 0) return "YES";
    return "NO";
}

int main()
{   
    cin >> t;
    while(t--)
    {
        Point a, b, c, d;
        cin >> a.x >> a.y >> a.z;
        cin >> b.x >> b.y >> b.z;
        cin >> c.x >> c.y >> c.z;
        cin >> d.x >> d.y >> d.z;

        cout << Check(a,b,c,d) << '\n';
    }
    
    
	return 0;
}
 