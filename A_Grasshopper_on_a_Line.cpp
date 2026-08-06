#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int x,k;
    cin >> x >> k;
    if(x%k!=0){cout<<1<<endl<<x<<endl;}
    else cout<<2<<endl<<1<<' '<<x-1<<endl;
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