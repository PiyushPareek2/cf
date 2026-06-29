#include <bits/stdc++.h>
using namespace std;

#define int long long
long long MOD=1e9 +7;
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

long long modpow(long long a, long long b, long long mod = MOD) {
    long long res = 1;
    a %= mod;

    while (b) {
        if (b & 1)
            res = res * a % mod;

        a = a * a % mod;
        b >>= 1;
    }

    return res;
}