#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    int sel=1,cnt=0,prev=a[0];
    for(int cur:a){
        if(cur-prev<=k){
            cnt++;
            sel=max(sel,cnt);
        }
        else{
             sel=max(sel,cnt);
            cnt=1;
        }
        prev=cur;
    }
    cout<<n-sel<<endl;
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