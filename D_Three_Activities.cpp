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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_test;
    cin >> total_test;
    for(int cur_test=1;cur_test<=total_test;cur_test++){
        int n;
        cin >> n;
        vector<vector<int>> a;
        for(int i=0;i<n;i++){int x ; cin >> x; a.push_back({x,i});}
        vector<vector<int>> b;
        for(int i=0;i<n;i++){int x ; cin >> x; b.push_back({x,i});}
        vector<vector<int>> c;
        for(int i=0;i<n;i++){int x ; cin >> x; c.push_back({x,i});}
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        sort(c.rbegin(),c.rend());
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i][1]==b[j][1])continue;
                for(int k=0;k<3;k++){
                if(c[k][1]==b[j][1] || c[k][1]==a[i][1])continue;
                    ans=max(ans,a[i][0]+b[j][0]+c[k][0]);
                }
            }
        }
       
        cout<<ans;
        
        cout<<nl;
    }
    
    return 0;
}