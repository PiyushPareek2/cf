#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ans=a[0],cur=a[0];
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])%2==0){
            cur=a[i];
        }
        else{
            cur=max(a[i],cur+a[i]);
        }
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
    return;
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