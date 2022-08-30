#include<bits/stdc++.h>
using namespace std;

class CongTy{
    private:
        string ma, ten;
        int sv;
    public:
        friend istream &operator>>(istream& in, CongTy &a)
        {
            cin >> a.ma;
            scanf(" ");
            getline(in, a.ten);
            cin >> a.sv;
            return in;
        }
        friend ostream &operator<<(ostream& out, CongTy a)
        {
            cout << a.ma << " " << a.ten << " " << a.sv << endl;
            return out;
        }
        string getMa(){
            return ma;
        }
        int getsl(){
            return sv;
        }
};

bool dieukien(CongTy a, CongTy b)
{
    if(a.getsl() != b.getsl())
		return a.getsl() > b.getsl();
	return a.getMa() < b.getMa();
}

int main()
{
    int n; cin >> n;
    CongTy a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,dieukien);
    for (int i=0;i<n;i++) cout << a[i];
}