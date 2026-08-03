#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n ;
    cin>> k;
    
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    if(k>1){cout<<"YES"<<'\n'; return ;}
    for(int i=1;i<n;i++) if(a[i]<a[i-1]){cout<<"NO"<<'\n'; return;}
    cout<<"YES"<<"\n";
    
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