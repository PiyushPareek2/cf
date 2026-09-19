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
        int n,x,y;
        cin >> n >> x >> y;
        int ans=0;
        int n1=n/x,n2=n/y,n3=n/lcm(x,y);
        ans= (n1-n3)*(2*n -(n1-n3-1))/2;
        ans-= (n2-n3)*(1+n2-n3)/2;
        cout<<ans;
        
        
        cout<<nl;
    }
    
    return 0;
}