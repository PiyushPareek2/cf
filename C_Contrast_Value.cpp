#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

  
    a.erase(unique(a.begin(), a.end()), a.end());
    n = a.size(); 

    if (n == 1) {
        cout << 1 << nl;
        return;
    } 
    int ans = 2; 

    for (int i = 1; i < n - 1; ++i) {
        bool is_peak = (a[i] > a[i - 1] && a[i] > a[i + 1]);
        bool is_valley = (a[i] < a[i - 1] && a[i] < a[i + 1]);
        
        if (is_peak || is_valley) {
            ans++;
        }
    }

    cout << ans << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_test;
    cin >> total_test;
    while (total_test--) {
        solve();
    }
    return 0;
}