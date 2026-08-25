#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n,k;
    cin >> n >>k;
    vector<vector<int>> pq;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        if(val%k==0)val=k;
        else val=val%k;
        pq.push_back({-val,i});
    }
    if(k==1){
        for(int i=1;i<=n;i++)cout<<i<<' ';
        cout<<endl;
        return;
    }
    sort(pq.begin(),pq.end());
    for(auto& v : pq ){
        cout<<v[1]+1<<" ";
    }
   
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