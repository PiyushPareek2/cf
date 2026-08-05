#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    unordered_map<int,int> mp;
    for(int i: a)mp[i]++;
    int u=mp.size();
    if(u>2)cout<<"No"<<endl;
    else if(u<2)cout<<"Yes"<<endl;
    else{
        int d=0;
        for( auto& [x,y]: mp){
            d=abs(d-y);
        }
        if(d==1||d==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
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