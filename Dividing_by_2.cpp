#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sm=1e9;
    for(auto &x : a) {cin >> x;sm=min(sm,x);}
    
    int op=0,csm=0,lcsm=0;
    for(int i=0;i<n;i++){
        while(sm<a[i] ){a[i]/=2; op++;}
        if(a[i]!=sm)lcsm++;
        else csm++;
    }
    if(lcsm==0){
        cout<<op<<endl;
        return;
    }
    if(sm&1){
        op+=n;
    }
    else {
        op+=csm;
    }
    cout<<op<<endl;
    
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