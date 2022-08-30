#include<bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int n)
{
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++){
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<bool> v(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (v[i] || arrPos[i].second == i) continue;
        int d = 0;
        int j = i;
        while (!v[j]){
            v[j] = 1;
            j = arrPos[j].second;
            d++;
        }
        if (d > 0) ans += (d - 1);
    }
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0;i<n;i++) cin>>a[i];
        cout<<minSwaps(a,n)<<endl;
    }
}
