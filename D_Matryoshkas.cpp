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
    for(auto& x : a) {cin >> x;}
    sort(a.begin(),a.end());
    int sets=0,prev=-1,s=1e9;
    sets=0;
    for(int i=0;i<n;i++){
        int cur=a[i];
        if(prev==cur)continue;
        int freq=1,j=i+1;
        while(j<n && a[i]==a[j]){freq++; j++;}
        if(prev!=cur-1){
            sets+=freq;
        }
        else{
            if(s<freq){
                sets+=freq-s;
            }
        }
        i=j-1;
        s=freq;
        prev=cur;

    }
    cout<<sets;
    
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