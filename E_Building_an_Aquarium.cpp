#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,w,mx=-1;
    cin >> n >> w;
    vector<int> a(n);
    for(auto &x : a){ cin >> x; mx=max(mx,x);}
    int l=1,r=mx+w,h=-1;
    sort(a.begin(),a.end());
    while(l<=r){
        int mid= l+(r-l)/2;
        int cap=0;
        for(int i=0;i<n;i++){
            if(mid>a[i])cap+=mid-a[i];
            else break;
        }
        if(cap<=w){
            h=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout<<h << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}