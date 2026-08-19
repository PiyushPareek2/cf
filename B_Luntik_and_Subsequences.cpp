#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(!x)zero++;
        if(x==1)one++;
    }
    cout<<(1ll<<zero)*one<<endl;
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