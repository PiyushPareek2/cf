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
        int z=0;
        vector<int> a(n);
        for(auto& x : a){cin >> x; if(!x)z++;}
        if(z<2){cout<<-1<<nl;continue;}
        if(a[0]+a[n-1]==2)cout<<2;
        else if(a[0]+a[n-1]==1)cout<<1;
        else cout<< 0;

        
        cout<<nl;
    }
    
    return 0;
}