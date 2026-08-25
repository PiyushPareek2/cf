#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int ways=0,cnt=0;
    for(int i : a){
        if(i<=q)cnt++;
        else{
            if(cnt>=k){
                
                int d=cnt-k+1;
                ways+=(d*(d+1))/2;
            }
            cnt=0;
        }
    }
      if(cnt>=k){
                int d=cnt-k+1;
                ways+=(d*(d+1))/2;
            }
    cout<<ways<<endl;
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