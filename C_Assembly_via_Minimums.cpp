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
    int n;
    cin >> n;
    int k= (n*(n-1))/2;
    vector<int> a(k);
    for(auto& x : a) {cin >> x;  }
    sort(a.begin(),a.end());
    int s=n,idx=0;
    for(int i=0;i<n;i++){
        if(idx<k)
        cout<<a[idx]<<' ';
        else cout<<1000000000<<' ';
        s-=1;
        idx+=s;
    }

    
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