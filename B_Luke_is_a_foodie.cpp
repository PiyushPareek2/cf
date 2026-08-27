#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n ,x ;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &v : a) cin >> v;
    int op=0,mx=INT_MAX,mn=INT_MIN;
    for(int i=0;i<n;i++){
        int rmx=a[i]+x;
        int rmn=a[i]-x;
        if(rmn<0)rmn=0;
        mx=min(rmx,mx);
        mn=max(rmn,mn);
        if(mx<mn){
            mx=rmx;
            mn=rmn;
            op++;
        }
    }
    cout <<op<< endl;
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