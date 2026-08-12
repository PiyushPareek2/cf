#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n , q;
    cin >> n >> q;
    vector<int> a(n);
    int ts=0;
    for(auto &x : a) {cin >> x; ts+=x;}
    if(ts%2==0)ts=1;
    else ts=0;
    for(int i=1;i<n;i++)a[i]=(a[i]+a[i-1]);
    while(q--){
        int k,r,l;
        cin >> l >> r >> k;
        int ns=0;
        if(k%2==0 || (r-l+1)%2==0 ){
           ns=1;
        }
        int os=0;
        if(l!=1)os=a[l-2];
        os=(os+a[r-1]);
        if((ts&&((abs(os-ns)) %2)) || (!ts && (abs(os-ns) )%2==0)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        
    }
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