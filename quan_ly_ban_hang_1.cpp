#include<bits/stdc++.h>
using namespace std;

int hd = 1, kh = 1, mh = 1;
map<int, string> mp1, mp2;
map<int, int> tien;

class KhachHang{
    public:
        string ma_kh, ten_kh, gt, ng_sinh, d_chi;
        friend istream &operator >> (istream &in, KhachHang &a){
            scanf(" ");
            getline(in,a.ten_kh);
            in >> a.gt >> a.ng_sinh;
            scanf(" ");
            getline(in,a.d_chi);
            mp1[kh] = a.ten_kh + " " + a.d_chi;
            kh++;
            return in;
        }
};

class MatHang{
    public:
        string ten_mh, d_vi;
        int g_mua, g_ban;
        friend istream &operator >> (istream &in, MatHang &a){
            scanf(" ");
            getline(in,a.ten_mh);
            in >> a.d_vi >> a.g_mua >> a.g_ban;
            mp2[mh] = a.ten_mh + " " + a.d_vi + " " + to_string(a.g_mua) + " " + to_string(a.g_ban);
            tien[mh] = a.g_ban;
            mh++;
            return in;
        }
};

int to_int(string s)
{
    s = s.substr(2,4);
    int res = stoi(s);
    return res;
}

class HoaDon{
    string ma_hd, ma_kh, ma_mh;
    int so_luong;
    friend istream &operator >> (istream &in, HoaDon &a){
        in >> a.ma_kh >> a.ma_mh >> a.so_luong;
        a.ma_hd = "HD";
        if(hd<10) a.ma_hd += "00" + to_string(hd);
        else if(hd>=10 && hd<100) a.ma_hd += "0" + to_string(hd);
        else if(hd>=100) a.ma_hd += to_string(hd);
        hd++;
        return in;
    }

    friend ostream &operator << (ostream &out, HoaDon a){
        out << a.ma_hd << " " << mp1[to_int(a.ma_kh)] << " " << mp2[to_int(a.ma_mh)]
            << " " << a.so_luong << " " << tien[to_int(a.ma_mh)]*a.so_luong << endl;
        return out;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}