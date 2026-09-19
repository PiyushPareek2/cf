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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> nm(m);
    int x;
    for(int j=0;j<n;j++)
    for(int i=0;i<m;i++){
        cin >> x;
        nm[i].push_back(x);
    }
    int ans=0;
    for(auto& v: nm){
        sort(v.begin(),v.end());
        for(int idx=0;idx<v.size();idx++){
            ans+=(idx*v[idx])-(n-idx-1)*v[idx];
        }
      
    }
      cout<<ans;
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