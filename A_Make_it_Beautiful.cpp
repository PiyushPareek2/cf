#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.rbegin(),a.rend());
    int x=a[0],i=0;
    for(;i<n;i++){
        if(a[i]!=x)break;
    }
    if(i>1 && i<n)swap(a[1],a[i]);
    if(i==n && n!=1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int v: a)cout<<v<<" ";
    cout<<endl;
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