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
    string st;
    cin >> st;
   vector<bool> removed(n + 1, false);
    int total_cost = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
                if (st[j - 1] == '1') break;

    
            if (!removed[j]) {
                removed[j] = true;
                total_cost += i;
            }
        }
    }

    cout << total_cost << nl;
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