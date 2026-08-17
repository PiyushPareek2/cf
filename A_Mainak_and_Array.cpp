#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ans=a[n-1]-a[0];
    int mn=a[0],mx=a[0];
    for(int i=0;i<n-1;i++){
        mx=max(a[i+1],mx);
        mn=min(a[i+1],mn);
        ans=max(ans,a[i]-a[i+1]);
    }
    ans=max(ans,mx-a[0]);
    ans=max(ans,a[n-1]-mn);
    cout<<ans<<endl;
    return ;
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