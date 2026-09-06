#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int l=0,r=n-1,g=0;
    while(l<r){
        g=gcd(g,abs(a[l]-a[r]));
        l++;
        r--;
    }
    cout<<g<<"\n";
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