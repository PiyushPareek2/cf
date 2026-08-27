#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    
    vector<vector<int>> a;
    for(int i=0;i<n;i++){int x; cin >> x; a.push_back({x,i});}
    sort(a.rbegin(),a.rend());
    int post=1,step=0;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        int idx=a[i][1];
        res[idx]=post;
        step+=abs(post)*2*a[i][0];
        if(post>0)post=-post;
        else post=-post+1;
    }
    cout<<step<<endl;
    cout<<0<<" ";
    for(int i: res)cout<<i<<" ";
    cout<<endl;
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