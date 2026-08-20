#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    int sum=0,st=n*k-1-n/2;
    vector<int> a(n*k);
    for(int&x : a)cin >> x;
    sort(a.begin(),a.end());
    for(int i=0;i<k;i++){
        sum+=a[st];
        st-=n/2+1;

    }
    cout<<sum<<endl;
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