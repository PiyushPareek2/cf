#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(ans.back()>a[i])ans.push_back(a[i]);
        ans.push_back(a[i]);
    }
    cout<<ans.size()<<endl;
    for(int i : ans )cout<<i<<" ";
    cout<<endl;
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