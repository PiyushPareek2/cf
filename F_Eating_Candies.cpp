#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int l=-1,r=n,lsum=0,rsum=0,ans=0;
    while(l<r){
        if(lsum==rsum){
            ans=l+1+n-r;
            l++;
            r--;
            if(l>=r)break;
            lsum+=a[l];
            rsum+=a[r];
        }
        if(lsum>rsum){
            r--;
             if(l>=r)break;
            rsum+=a[r];
        }
        if(rsum>lsum){
            l++;
             if(l>=r)break;
            lsum+=a[l];
        }
    }
    cout <<ans<< endl;
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