#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        int cur=a[i];
        if(cur)cnt++;
        else{
            if(cnt){ans++;
            cnt=0;}
        }
    }
    if(cnt)ans++;
    if(ans>2)ans=2;
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