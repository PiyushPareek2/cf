#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n);
    for(auto &x : b) cin >> x;
    int mod=1e9 +7;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long ways=1;
    for(int i=0;i<n;i++){
       int lb=-1;
       int l=0,r=n-1;
       while(l<=r){
        int mid= l +(r-l)/2;
        if(b[mid]<a[i]){
            lb=mid+1;
            l=mid+1;
        }
        else r=mid-1;
       }
       if(lb<=i){
        ways=0;
        break;
       }
       ways= (ways*(lb-i))%mod;
    }
    cout <<ways<< endl;
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