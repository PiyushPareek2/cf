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
        vector<int> a(n);
        for(auto& x : a)cin >> x;
        int bit=0;
        bool flag=false;
        for(;;bit++){
            int v=(a[0]>>bit)&1;
            for(int i=0;i<n;i++){
                if(((a[i]>>bit)&1)!=v){
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }
        bit++;
        cout<<(1ll<<bit);
        cout<<nl;
    }
    
    return 0;
}