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
    
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    int l=0,r=n-1,mn=1,mx=n;
    while(l<r){
        if(a[l]==mn){
            mn++;
            l++;
        }
        else if(a[l]==mx){
            mx--;
            l++;
        }
        else if(a[r]==mn){
            mn++;
            r--;
        }
        else if(a[r]==mx){
            mx++;
            r--;
        }
        else{ cout<<l+1<<' '<<r+1<<endl; return ;}
    }
    
    cout<<-1 << nl;
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