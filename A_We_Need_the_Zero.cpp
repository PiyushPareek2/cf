#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int val=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        val=val^x;
    }
    if(n%2==0){
        if(!val)cout<<3<<endl;
        else cout<<-1<<endl;
        return;
    }
    cout<<val<<endl;
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