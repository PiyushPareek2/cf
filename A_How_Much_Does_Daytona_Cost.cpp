#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >>k;
    bool flag =false;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        if(cur==k)flag=true;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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