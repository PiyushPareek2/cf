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
        vector<int> bit(32,0);
        for(int x=0;x<n;x++){
            int i ;
            cin >> i;
            int msb= 31-__builtin_clz(i);
            bit[msb]++;
        }
        int ans=0;
        for(int i: bit){
            ans+=(i-1)*i/2;
        }
        cout<<ans;
        cout<<nl;
    }
    
    return 0;
}