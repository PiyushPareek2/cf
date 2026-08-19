#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ans= ans& x;
    }
    cout << ans<< endl;
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