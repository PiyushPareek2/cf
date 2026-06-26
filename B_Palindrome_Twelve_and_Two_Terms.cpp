#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ispal(int x){
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

void solve(){
    int n;
    cin >> n;
    for(int b = 12; b <= n; b += 12){
        int a = n - b;
        if(a >= 0 && ispal(a)){
            cout << a << " " << b << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}