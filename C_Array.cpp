#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int N = 1e6 + 1; // maximum n

long long fact[N], invfact[N];

long long modpow(long long a, long long b) {
    long long res = 1;
    a %= MOD;

    while (b) {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

void precompute() {
    fact[0] = 1;

    // Compute factorials
    for (int i = 1; i < N; i++)
        fact[i] = fact[i - 1] * i % MOD;

    // Compute inverse factorials
    invfact[N - 1] = modpow(fact[N - 1], MOD - 2);

    for (int i = N - 2; i >= 0; i--)
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;

    return fact[n] * invfact[r] % MOD
                   * invfact[n - r] % MOD;
}


void solve(){
    int n;
    cin >> n;
    
    cout <<(2* nCr(2*n-1,n-1)-n) % MOD << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    
    solve();
    
    
    return 0;
}