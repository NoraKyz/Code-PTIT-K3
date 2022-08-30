#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct Point {
    double x,y;
};

int main()
{
    int t; cin >> t;
    struct Point a,b,c;
    while (t--){
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double d1=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
        double d2=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
        double d3=sqrt((b.x-c.x)*(b.x-c.x)+(b.y-c.y)*(b.y-c.y));
        if (d1+d2>d3 && d1+d3>d2 && d2+d3>d1){
            double area = (d1+d2+d3)*(d1+d2-d3)*(d1-d2+d3)*(-d1+d2+d3);
            double s1 = 0.25*sqrt(area);
            double R = (d1*d2*d3)/(4*s1);
            printf("%.3lf\n",PI*R*R);
        }
        else cout << "INVALID\n";
    }
    return 0;
}


