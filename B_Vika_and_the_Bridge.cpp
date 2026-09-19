#include <bits/stdc++.h>
using namespace std;
#define int long long
#define printvec(v) for(auto &x : v) cout << x << ' '; cout << '\n'
#define print(v) cout<<v<<' '
#define nl '\n'
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " = " << (x) << " (Line " << __LINE__ << ")\n"
#else
#define dbg(x)
#endif

void solve(){
    int n,k,x;
    cin >> n >>k;
    vector<vector<int>>mp(k+1);
    for(int i=0;i<n;i++) {cin >> x; mp[x].push_back(i+1);}
    int res=n;
    for(auto& v: mp){
    int d1=v[0]-1,d2=-1;
    if(v.empty())continue;
    v.push_back(n+1);
    for(int i=0;i<v.size()-1;i++){

        int d=v[i+1]-v[i]-1;
        if(d>=d1){
            d2=d1;
            d1=d;
        }
        else if(d>=d2){
            d2=d;
        }
    }
    int cur=max(d1/2,d2);
    res=min(res,cur);
 
    }
    
    cout<<res;
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_test;
    cin >> total_test;
    for(int cur_test=1;cur_test<=total_test;cur_test++){
        solve();
    }
    
    return 0;
}