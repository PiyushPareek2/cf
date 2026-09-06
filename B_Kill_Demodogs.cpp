#include <bits/stdc++.h>
using namespace std;

#define int long long
int mod=1e9 +7;
void solve(){
    int n;
    cin >> n;
    int ans=0;
    n=n%mod;
  
   ans= (((n*((4*n-1)%mod))%mod*(n+1)%mod)*337)%mod;

    cout <<ans<< endl;
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