#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(!a)cnt++;
        else cnt=0;
        ans=max(ans,cnt);
    }
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