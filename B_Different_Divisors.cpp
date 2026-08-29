#include <bits/stdc++.h>
using namespace std;

#define int long long
int n=20012;
vector<int>primes;
void erathosmus(){
    vector<bool>isprime(n+1,true);
    for(int i=2;i<=n;i++){
        if(!isprime[i])continue;
        primes.push_back(i);
        for(int j=2*i;j<=n;j+=i){
            isprime[j]=false;
        }
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    erathosmus();
    int t;
    cin >> t;
    while(t--){
    int d;
    cin >> d;
    int p1=lower_bound(primes.begin(),primes.end(),d+1)-primes.begin();
    int p2=lower_bound(primes.begin(),primes.end(),primes[p1]+d)-primes.begin();
    cout<<primes[p1]*primes[p2]<<endl;;

    }
    
    return 0;
}