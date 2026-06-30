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



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int ans=1;
    int k,n=0;
    cin >> k;
    for(int i=0;i< k;i++){
        int x;
        cin>> x;
        ans= (ans*nCr(n+x-1,x-1))%MOD;
        n+=x;
    }
     cout<< ans <<endl;

   
    
    return 0;
}