#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<int> a(n);
    for(auto&x : a)cin>>x;
    if(a[n-1]>0)ans++;
    for(int i=n-2;i>=0;i--){
        a[i]=max(a[i],a[i]+a[i+1]);
        if(a[i]>0)ans++;
    }
    
    cout<<ans<<endl;
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