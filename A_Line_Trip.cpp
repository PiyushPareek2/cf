#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,x;
    cin >> n;
    cin >> x;
    vector<int> a(n);
    for(auto &s : a) cin >> s;
    int dist=max(a[0],2*(x-a[n-1]));
    for(int i=1;i<n;i++){
        dist=max(dist,a[i]-a[i-1]);
    }
    cout<<dist<<endl;
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