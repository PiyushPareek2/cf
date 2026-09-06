#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    int score=0;
    for(int i=0;i<n-1;i++){
        score=max(score,gcd(a[i],a[n-1]-a[i]));
    }
    cout<<score<<endl;
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