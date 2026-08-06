#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int ans=INT_MAX,prev=INT_MIN;
    for(int i=0;i<n;i++){
        int cur;
        cin >> cur;
        int k=(cur-prev+2)/2;
        ans=min(ans,k);
        prev=cur;
    }
    if(ans<0)cout<<0<<endl;
    else cout<<ans<<endl;
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