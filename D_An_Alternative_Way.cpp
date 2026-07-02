#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(int i=0;i<n;i++){
        if(i&1  && a[i]>b[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(i%2==0 && b[i]>a[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
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