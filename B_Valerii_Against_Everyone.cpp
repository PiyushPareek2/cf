#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout <<"NO"<< endl;
    return ;
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