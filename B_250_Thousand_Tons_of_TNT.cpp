#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ans=0;
    vector<int> ps(n);
    ps[0]=a[0];
    for(int i=1;i<n;i++)ps[i]=ps[i-1]+a[i];
    for(int sz=1;sz<=n/2;sz++){
        if(n%sz)continue;
        int mx=LLONG_MIN,mn=LLONG_MAX;
     for(int i=sz-1;i<n;i+=sz){
        int cur=ps[i];
        if(i-sz>=0) cur-=ps[i-sz];
        mx=max(mx,cur);
        mn=min(mn,cur);
     }
     if(mx!=LLONG_MIN && mn!=LLONG_MIN)
     ans=max(ans,mx-mn);
    }
    cout <<ans<< endl;
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