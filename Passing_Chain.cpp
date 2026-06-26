#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    if(k>=n){
        cout<<1;
        return;
    }
    int p=1;
    while(p+k<=n){
        p+=k;
    }
    cout<<p<<endl;
    
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