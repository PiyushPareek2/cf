#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {cin >> x; if(x==1)x++;}
    for(int j=0;j<2;j++)
    for(int i=0;i<n-1;i++){
        if(a[i+1]%a[i]==0){
            a[i+1]++;
        }
       
    }
    
    for(int i: a)cout<<i<<' ';
    cout<<endl;
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