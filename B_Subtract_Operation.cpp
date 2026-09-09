#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    k=abs(k);
    int l=0,r=1;
    while(l<n && r<n){
        int diff=a[r]-a[l];
        if(diff==k){
            cout<<"YES"<<endl;
            return;
        }
        else if(diff>k){
            l++;
        }
        else r++;
      
    }
  
 cout<<"NO"<<endl;
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