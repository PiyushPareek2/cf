#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int l=0,r=n-1;
    while(l<r){
        int mx=max(a[l],a[r]);
        for(int i=l+1;i<r;i++){
            if(a[i]>mx){
                cout<<"YES"<<endl<<l+1<<" "<<i+1<<" "<<r+1<<endl;
                return;
            }
        }
        if(a[l]>a[r])l++;
        else r--;
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