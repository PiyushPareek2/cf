#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
     vector<int> b(n);
    for(auto &x : b) cin >> x;
    int res=0;
    vector<int>ps(n);
    int mx=-1;
    for(int i=0;i<n;i++){
        if(mx<b[i]){
            mx=b[i];   
        }
        ps[i]=mx;
    }
    int sum=0;
    for(int i=0;i<min(n,k);i++){
       sum+=a[i];
       res=max(res,sum+ (k-i-1)*ps[i]);
    }
    cout <<res<< endl;
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