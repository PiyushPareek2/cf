#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int l;
    cin>> l;
    int r;
    cin>> r;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int lsum=0;
    for(int i=0;i<l-1;i++){
        lsum+=a[i];
    }
    int rsum=0;
    for(int i=r;i<n;i++){
        rsum+=a[i];
    }
    lsum=max(lsum,rsum);
    cout<<lsum<<endl;
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