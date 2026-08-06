#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    vector<int> b,c;
    int i=0;
    for( i=0;i<n && a[0]==a[i];i++)b.push_back(a[i]);
    for(;i<n;i++)c.push_back(a[i]);
    if(!c.size()){
        cout<<-1<<endl ;
        return ;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int val: b)cout<<val<<" ";
    cout<<endl;
    for(int val: c)cout<<val<<" ";
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