#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> getDivisors(int n) {  //n ke divisors in divisor vector
    vector<int> divisors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            // Avoid duplicate when i*i = n
            if (i != n / i)
                divisors.push_back(n / i);
        }
    }

    return divisors;
}
const int N = 1e6 + 1;
vector<int> divisors[N];

void precomputeDivisors() {   // i ki table chal rahi or jo bhi isme aa raha  ha i uska factor ho raha ha
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

