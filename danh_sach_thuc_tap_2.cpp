#include<bits/stdc++.h>
using namespace std;
int t;
struct ThucTap{
	int stt;
	string ma,ten,lop,email,dn;
};
bool cmp(ThucTap x,ThucTap y){
	return x.ma < y.ma;
}
int main(){
	int n;
	cin >> n;
	ThucTap a[n];
	int stt = 1;
	for(int i = 0;i<n;i++){
		scanf("\n");
		a[i].stt = stt;
		stt++;
		cin >> a[i].ma;
		scanf("\n");
		getline(cin,a[i].ten);
		scanf("\n");
		cin >> a[i].lop >> a[i].email >> a[i].dn;
	}
	sort(a,a+n,cmp);
	int q;
	cin >> q;
	scanf("\n");
	while(q--){
		string s;
		cin >> s;
		for(int i = 0;i<n;i++)
			if(s == a[i].dn){
				cout << a[i].stt << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << endl;
			}
	}
}

