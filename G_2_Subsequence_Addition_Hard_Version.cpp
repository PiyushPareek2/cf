#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    if(a[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    int l=1;
    for(int i=1;i<n;i++){
        if(l<a[i]){
        cout<<"NO"<<endl;
        return;
        }
        l+=a[i];
    }
        cout<<"YES"<<endl;
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