#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,q;
    cin >> n >>q;
    vector<int> a(n);
    for(auto &b : a) cin >> b;
    vector<int> x(q);
    for(auto &b : x) cin >> b;
    vector<int> res(32,0);
    for(int i=0;i<31 ;i++){
        int p=i;
        for(int j=0;j<q;j++){
            if(p>=x[j]){
                res[i]+=(1<<(x[j]-1));
                p=min(p,x[j]-1);
            }
        }
  
    }
    for(int i=0;i<n;i++){
        int p=__builtin_ctzll(a[i]);

        if(p>30)p=30;
        a[i]+=res[p];
    }
    for(int i: a)cout<<i<<" ";

    cout << endl;
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