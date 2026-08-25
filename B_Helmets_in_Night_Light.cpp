#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n);
    for(auto &x : b) cin >> x;
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++){
        vec[i].push_back(b[i]);
        vec[i].push_back(-a[i]);
    }
    int rem=n-1,cost=k;
    sort(vec.begin(),vec.end());
    for(auto& v : vec){
        int a=v[0];
        int b=-v[1];
        if(a>=k)break;
        int sz=min(b,rem);
        cost+=sz*a;
        rem-=sz;

    }
       
    cost+=rem*k;
    cout<<cost<<endl;
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