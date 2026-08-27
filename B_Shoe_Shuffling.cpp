#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    unordered_map<int,vector<int>> range;
    for(int i=0;i<n;i++){
        if(range.count(a[i]))continue;
        int lb=lower_bound(a.begin(),a.end(),a[i])-a.begin();
        int ub=upper_bound(a.begin(),a.end(),a[i])-a.begin();
        ub--;
        if(lb==ub){
            cout<<-1;
            return;
        }
        range[a[i]].push_back(lb);
        range[a[i]].push_back(ub);
    }
    vector<int> res(n);
    for(auto& [x,v]: range){
        int st=v[0];
        int end=v[1];
        for(int i=st;i<end;i++){
            res[i]=i+2;
        }
        res[end]=(st+1);
    }
    for(int i: res)cout<<i<<" ";

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