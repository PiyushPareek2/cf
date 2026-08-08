#include <bits/stdc++.h>
using namespace std;

#define int long long
long long binpow(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res *= a;

        a *= a;
        b >>= 1;
    }

    return res;
}
void solve(){
    int n;
    cin >> n;
    int d=log10(n)+1;
    if(n<=10){cout<<n<<endl; return;}
    cout<<9*(d-1) + n/(binpow(10,d-1))<<endl;
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}